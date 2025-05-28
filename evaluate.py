#!/usr/bin/env python3

import os
import csv
import sys
import pandas as pd
import numpy as np
from scipy import stats

datasets = {
    # 'gcc430-orig': {
    #     'info_file': "./results/gcc430-orig.csv",
    #     'bisection_result_file': "./results/gcc430_orig_bisection_opt_order.csv",
    #     'd3_result_file': "./results/gcc430_d3_orders.csv",
    #     'tamer_result_file': "./results/gcc430_tamer_orders.csv",
    #     'bug_num': 29
    # },
    'gcc430': {
        'info_file': "./results/gcc430.csv",
        'bisection_result_file': "./results/gcc430_bisection_opt_order.csv",
        'd3_result_file': "./results/gcc430_d3_orders.csv",
        'tamer_result_file': "./results/gcc430_tamer_orders.csv",
        'bug_num': 29
    },
    'gcc440': {
        'info_file': "./results/gcc440.csv",
        'bisection_result_file': "./results/gcc440_bisection_opt_order.csv",
        'd3_result_file': "./results/gcc440_d3_orders.csv",
        'tamer_result_file': "./results/gcc440_tamer_orders.csv",
        'bug_num': 11
    },
    'gcc450': {
        'info_file': "./results/gcc450.csv",
        'bisection_result_file': "./results/gcc450_bisection_opt_order.csv",
        'd3_result_file': "./results/gcc450_d3_orders.csv",
        'tamer_result_file': "./results/gcc450_tamer_orders.csv",
        'bug_num': 7
    },
    'llvm280': {
        'info_file': "./results/llvm280.csv",
        'bisection_result_file': "./results/llvm280_bisection_opt_order.csv",
        'd3_result_file': "./results/llvm280_d3_orders.csv",
        'tamer_result_file': "./results/llvm280_tamer_orders.csv",
        'bug_num': 5
    }
}

def cal(dataset):

    def calculate_distinct_counts(bug_id_list, prefix_length=None):
        id = 1
        distinct_counts = []
        seen = set()
        length = min(prefix_length, len(bug_id_list)) if prefix_length else len(bug_id_list)
        
        for i in range(length):
            seen.add(bug_id_list[i])
            distinct_counts.append(len(seen))
            if i == 0 or distinct_counts[i] > distinct_counts[i - 1]:
                # print("Bug [{}]: waste effort: {}, bug_id: [{}]".format(id, i+1, bug_id_list[i]))
                id += 1
        return distinct_counts  

    def trans(row, bug_map):
        bug_id_list = []
        for item in row:
            if str(item) not in bug_map:
                continue
            bug_id_list.append(bug_map[str(item)])
        distinct_counts = calculate_distinct_counts(bug_id_list)
        return distinct_counts

    info_csv = datasets[dataset]['info_file']
    bug_num = datasets[dataset]['bug_num']
    bug_map = {}
    with open(info_csv, mode='r', encoding='utf-8') as csv_file:
        reader = csv.reader(csv_file)
        next(reader)
        for row in reader:
            name = str(row[0])
            bug_id = str(row[1])
            bug_map[name] = bug_id 
    # print(bug_map)

    waste_effort_dict = {}
    for approach in ['bisection', 'd3', 'tamer']:

        result_csv = datasets[dataset]['{}_result_file'.format(approach)]

        result_raw_data = pd.read_csv(result_csv, header=None)
        transformed_data = result_raw_data.apply(lambda row: trans(row, bug_map), axis=1)
        transformed_data = pd.DataFrame(transformed_data.tolist())
        mean_data = transformed_data.mean(axis=0).tolist()

        waste_effort_list = []
        for idx, row in transformed_data.iterrows():
            first_position = []
            for num in range(1, bug_num+1):
                matching = row[row == num]
                if matching.empty:
                    first_position.append(None)
                else:
                    first_position.append(matching.index[0]+1)
            waste_effort_list.append(first_position)
        result_array = np.array(waste_effort_list)
        mean_waste_effort = np.nanmean(result_array, axis=0)
        # print(len(mean_waste_effort))
        # print(mean_waste_effort)
        waste_effort_dict[approach] = mean_waste_effort

    return waste_effort_dict['bisection'], waste_effort_dict['d3'], waste_effort_dict['tamer']


if __name__ == "__main__":

    for dataset in datasets:
        print('#'*100)
        print(f'### Dataset: {dataset}')
        print('#'*100)
        print('ID, Bisection, Tamer, delta_Tamer, D3, delta_D3')
        waste_effort_bisection, waste_effort_d3, waste_effort_tamer = cal(dataset)
        # print('Bisection:', waste_effort_bisection)
        # print('D3:', waste_effort_d3)
        # print('Tamer:', waste_effort_tamer)
        assert len(waste_effort_bisection) == len(waste_effort_d3) == len(waste_effort_tamer)

        for i in range(len(waste_effort_bisection)):
            if i == 0:
                continue
            bisection = waste_effort_bisection[i]
            tamer = waste_effort_tamer[i]
            d3 = waste_effort_d3[i]
            delta_tamer = (tamer - bisection) / tamer
            delta_d3 = (d3 - bisection) / d3

            print(f'{i+1}, {bisection}, {tamer}, {delta_tamer:.2%}, {d3}, {delta_d3:.2%}')

        # calculate the statistical significance with Wilcoxon signed-rank test
        # bisection vs. tamer
        p_value_tamer = stats.wilcoxon(waste_effort_bisection, waste_effort_tamer).pvalue
        print(f'p-value (Bisection vs. Tamer): {p_value_tamer:.6f}')

        # bisection vs. d3
        p_value_d3 = stats.wilcoxon(waste_effort_bisection, waste_effort_d3).pvalue
        print(f'p-value (Bisection vs. D3): {p_value_d3:.6f}')
            
    