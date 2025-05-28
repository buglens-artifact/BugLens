#!/usr/bin/env python3

import sys
import csv
from datetime import datetime
import random
import os
import subprocess
import math

distance_matrix = {}

def get_test_cases(file_path):
    test_cases = []
    with open(file_path, mode='r', encoding='utf-8') as csv_file:
        reader = csv.reader(csv_file)
        next(reader)
        for row in reader:
            filename = row[0]
            bug_id = row[1]
            bisection_result = row[2]
            commit_time = int(row[3])
            bad_opt_level = row[4]
            passes_to_enable_vector = row[5]
            passes_to_enable = row[6]
            test_cases.append((filename, # 0
                                bug_id,  # 1
                                bisection_result, # 2
                                commit_time, # 3
                                bad_opt_level, # 4
                                passes_to_enable_vector, # 5
                                passes_to_enable, # 6
                            ))
    return test_cases

def calculate_distance(test_case1, test_case2):
    distance = 0

    #################################
    ###      bisection part       ###
    #################################
    distance += abs(test_case1[3] - test_case2[3])

    #################################
    ### false negative mitigation ###
    #################################
    vector1 = [i for i in test_case1[4].split(',')] + [i for i in test_case1[5].split(',')]
    vector2 = [i for i in test_case2[4].split(',')] + [i for i in test_case2[5].split(',')]
    if len(vector1) != len(vector2):
        return distance
    distance += sum([1 for i, j in zip(vector1, vector2) if i != j]) / len(vector1)

    return distance
        
### sort by FPF
def furthest_point_first(test_cases, prioritization_length=None):
    # select the first case randomly
    initial_case = random.choice(test_cases)
    selected_cases = [initial_case]
    test_cases.remove(initial_case)
    while len(selected_cases) < prioritization_length:
        furthest_case = max(
            test_cases, 
            key=lambda case: min(
                distance_matrix[case[0], selected[0]]
                for selected in selected_cases
            )
        )
        selected_cases.append(furthest_case)
        test_cases.remove(furthest_case)
    
    return selected_cases

def pre_compute_distance_matrix(test_cases):
    for i, test_case1 in enumerate(test_cases):
        for j, test_case2 in enumerate(test_cases):
            if i >= j:
                continue
            distance = calculate_distance(test_case1, test_case2)
            distance_matrix[test_case1[0], test_case2[0]] = distance
            distance_matrix[test_case2[0], test_case1[0]] = distance

def prioritize(input_csv, output_csv, n_iterations = 1, prioritization_length=None):
    open(output_csv, 'w').close()

    test_cases = get_test_cases(input_csv)
    prioritization_length = prioritization_length or len(test_cases)
    pre_compute_distance_matrix(test_cases)
    # print(distance_matrix)
    for i in range(n_iterations):
        print("Iteration: {}".format(i))
        test_cases_copy = test_cases.copy()
        sorted_cases = furthest_point_first(test_cases_copy, prioritization_length)
        with open(output_csv, 'a', encoding='utf-8') as f:
            writer = csv.writer(f, quoting=csv.QUOTE_MINIMAL)
            writer.writerow([case[0] for case in sorted_cases])

if __name__ == '__main__':

    if len(sys.argv) < 4:
        print("Usage: {} <input_csv> <output_file> <number_of_iterations> [prioritization_length]".format(sys.argv[0]))
        sys.exit(1)

    input_csv = sys.argv[1]
    output_csv = sys.argv[2]
    number_of_iterations = int(sys.argv[3])

    prioritization_length = int(sys.argv[4]) if len(sys.argv) == 5 else None
    prioritize(input_csv, output_csv, number_of_iterations, prioritization_length)
