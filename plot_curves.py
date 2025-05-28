#!/usr/bin/env python3
import csv
import sys
import matplotlib.pyplot as plt
from matplotlib.ticker import MultipleLocator
from tqdm import tqdm
import numpy as np
from glob import glob
import pandas as pd
import numpy as np

RQ = None

def read_csv_column(file_path, target_column):
    target_column_data = []
    with open(file_path, mode='r', encoding='utf-8') as csv_file:
        reader = csv.reader(csv_file)
        headers = next(reader)
        column_index = headers.index(target_column)
        
        for row in reader:
            target_column_data.append(row[column_index])
    return target_column_data

def calculate_distinct_counts(bug_id_list, prefix_length=None):
    id = 1
    distinct_counts = []
    seen = set()
    length = min(prefix_length, len(bug_id_list)) if prefix_length else len(bug_id_list)
    
    for i in range(length):
        seen.add(bug_id_list[i])
        distinct_counts.append(len(seen))
        if i == 0 or distinct_counts[i] > distinct_counts[i - 1]:
            id += 1
    return distinct_counts 

def plot_average(input_csv, bug_map, prefix_length = None, label = ""):
    line_styles = {
        "BugLens": "-",
        # "Bisection-Sole": "-",
        "Bisection-Sole": "-." if RQ == "rq3" else "-",
        "D3": "--",
        "Tamer": "-.",
        "Baseline (Random Order)": ":",
    }
    colors = {
        "BugLens": "#1f77b4",
        # "Bisection-Sole": "#1f77b4",
        "Bisection-Sole": "#ff7f0e" if RQ == "rq3" else "#1f77b4",
        "D3": "#ff7f0e",
        "Tamer": "#2ca02c",
        "Baseline (Random Order)": "#696969",
    }
    point_markers= {
        "BugLens": "o",
        # "Bisection-Sole": "o",
        "Bisection-Sole": "*" if RQ == "rq3" else "o",
        "D3": "d",
        "Tamer": "*",
        "Baseline (Random Order)": "^",
    }

    def trans(row, bug_map):
        bug_id_list = []
        for item in row:
            if str(item) not in bug_map:
                continue
            bug_id_list.append(bug_map[str(item)])
        distinct_counts = calculate_distinct_counts(bug_id_list, prefix_length)
        return distinct_counts

    data = pd.read_csv(input_csv, header=None)
    transformed_data = data.apply(lambda row: trans(row, bug_map), axis=1)
    transformed_data = pd.DataFrame(transformed_data.tolist()) 
    avg_data = transformed_data.mean(axis=0).tolist()

    ### plot the curve
    x_values = range(1, len(avg_data) + 1)
    plt.plot(x_values, avg_data, label=label, linestyle=line_styles[label], linewidth=3, color=colors[label])

    std_data = transformed_data.std(axis=0).tolist()
    plt.fill_between(range(1, len(avg_data) + 1), [avg_data[i] - std_data[i] for i in range(len(avg_data))], [avg_data[i] + std_data[i] for i in range(len(avg_data))], alpha=0.2, color=colors[label])

    for i in range(len(avg_data)):
        if avg_data[i] == 29:
            plt.plot(i+1, 29, marker=point_markers[label], markersize=15, color=colors[label])
            break

def get_bug_map():
    input_csv = "./results/gcc430.csv"
    bug_map = {}
    with open(input_csv, mode='r', encoding='utf-8') as csv_file:
        reader = csv.reader(csv_file)
        next(reader)
        for row in reader:
            name = str(row[0])
            bug_id = str(row[1])
            bug_map[name] = bug_id
    return bug_map

def set_plot_style():
    plt.figure(figsize=(13, 8))
    ax = plt.gca()
    y_major_locator = MultipleLocator(1)
    ax.yaxis.set_major_locator(y_major_locator)
    plt.xticks(fontproperties='Times New Roman', fontsize=28)
    plt.yticks(fontproperties='Times New Roman', fontsize=28)
    plt.xlabel('Number of Test Cases Examined', fontproperties='Times New Roman', fontsize=34)
    plt.ylabel('Number of Bugs Identified', fontproperties='Times New Roman', fontsize=34)
    plt.yticks(np.arange(0, 30, 5))
    plt.tight_layout()

def show_plot():
    plt.legend(fontsize=20)
    plt.show()
        
if __name__ == '__main__':

    if len(sys.argv) != 2:
        print("Usage: {} <research_question: rq1/rq2/rq3>".format(sys.argv[0]))
        sys.exit(1)

    RQ = sys.argv[1]
    bug_map = get_bug_map()
    tamer_file = "./results/gcc430_tamer_orders.csv"
    d3_file = "./results/gcc430_d3_orders.csv"
    random_file = "./results/gcc430_random_orders.csv"

    set_plot_style()

    if RQ == "rq1":
        bisection_sole_file = "./results/gcc430_bisection_sole_order.csv"
        # curve for the first 100 tests
        plot_average(bisection_sole_file, bug_map, 100, "Bisection-Sole")
        plot_average(tamer_file, bug_map, 100, "Tamer")
        plot_average(d3_file, bug_map, 100, "D3")
        plot_average(random_file, bug_map, 100, "Baseline (Random Order)")
        show_plot()

        # curve for the whole process
        set_plot_style()
        plot_average(bisection_sole_file, bug_map, None, "Bisection-Sole")
        plot_average(tamer_file, bug_map, None, "Tamer")
        plot_average(d3_file, bug_map, None, "D3")
        plot_average(random_file, bug_map, None, "Baseline (Random Order)")
        plt.show()

    elif RQ == "rq2":
        bisection_opt_file = "./results/gcc430_bisection_opt_order.csv"
        # curve for the first 100 tests
        plot_average(bisection_opt_file, bug_map, 100, "BugLens")
        plot_average(tamer_file, bug_map, 100, "Tamer")
        plot_average(d3_file, bug_map, 100, "D3")
        plot_average(random_file, bug_map, 100, "Baseline (Random Order)")
        show_plot()

        # curve for the whole process
        set_plot_style()
        plot_average(bisection_opt_file, bug_map, None, "BugLens")
        plot_average(tamer_file, bug_map, None, "Tamer")
        plot_average(d3_file, bug_map, None, "D3")
        plot_average(random_file, bug_map, None, "Baseline (Random Order)")
        show_plot()

    elif RQ == "rq3":
        bisection_sole_file = "./results/gcc430_orig_bisection_sole_order.csv"
        bisection_opt_file = "./results/gcc430_orig_bisection_opt_order.csv"
        # curve for the first 100 tests
        plot_average(bisection_opt_file, bug_map, 100, "BugLens")
        plot_average(bisection_sole_file, bug_map, 100, "Bisection-Sole")
        plot_average(random_file, bug_map, 100, "Baseline (Random Order)")
        show_plot()

        # curve for the whole process
        set_plot_style()
        plot_average(bisection_opt_file, bug_map, None, "BugLens")
        plot_average(bisection_sole_file, bug_map, None, "Bisection-Sole")
        plot_average(random_file, bug_map, None, "Baseline (Random Order)")
        show_plot()

    else:
        print("Invalid research question.")
        sys.exit(1)