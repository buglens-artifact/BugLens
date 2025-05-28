#!/usr/bin/env python3
import os
import re
import sys
from collections import defaultdict
import matplotlib.pyplot as plt
import numpy as np


skip_case_map = {
    "gcc430" : [],
    "gcc440" : ["60", "185", "273", "336", "418", "445"],
    "gcc450" : ["13", "16"],
    "llvm280" : ["51", "0", "116", "111", "118", "120", "121", "119", "110", "117", "112", "115", "123", "124", "122", "113", "114", "74", "19", "86", "91", "54", "107", "37", "106", "64", "48", "70", "23", "49" ]
}

def count_unique_hashes(root_dir, skip_list):
    num_test_cases = 0
    hash_counts = defaultdict(int)
    hash_pattern1 = re.compile(r'Output of /tmp/gcc-([a-fA-F0-9]+)/bin/gcc with')
    hash_pattern2 = re.compile(r'Output of /tmp/llvm-([a-fA-F0-9]+)/bin/clang with')

    for subdir in os.listdir(root_dir):
        subdir_path = os.path.join(root_dir, subdir)
        if not os.path.isdir(subdir_path) or subdir in skip_list:
            continue

        log_file_path = os.path.join(subdir_path, "bisection_small.log")
        if not os.path.exists(log_file_path):
            continue

        num_test_cases += 1
        unique_hashes = set()
        with open(log_file_path) as log_file:
            for line in log_file:
                match1 = hash_pattern1.search(line)
                match2 = hash_pattern2.search(line)
                if match1:
                    unique_hashes.add(match1.group(1))
                elif match2:
                    unique_hashes.add(match2.group(1))

        for commit_hash in unique_hashes:
            hash_counts[commit_hash] += 1

    return hash_counts, num_test_cases
        


if __name__ == "__main__":

    datasets = [
        "./datasets/gcc430",
        "./datasets/gcc440",
        "./datasets/gcc450",
        "./datasets/llvm280",
    ]

    for dataset in datasets:
        benchmark_name = os.path.basename(dataset)
        skip_list = skip_case_map.get(benchmark_name, [])
        hash_count, num_test_cases = count_unique_hashes(dataset, skip_list)

        sorted_hash_counts = sorted(hash_count.items(), key=lambda x: x[1], reverse=False)
        # for commit_hash, count in sorted_hash_counts:
        #     print(f"{commit_hash}: {count}")

        print("#" * 80)
        print("Benchmark: {}".format(benchmark_name))
        print("Total unique hashes: {}".format(len(sorted_hash_counts)))
        print("Avergae: {}".format(len(sorted_hash_counts) / num_test_cases))

        x = np.arange(len(sorted_hash_counts))
        y = [count for commit_hash, count in sorted_hash_counts]

        plt.figure(figsize=(10, 7))
        plt.xticks(fontproperties='Times New Roman', fontsize=30)
        plt.yticks(fontproperties='Times New Roman', fontsize=30)
        plt.xlabel("Compiler Versions", fontproperties='Times New Roman', fontsize=45)
        plt.ylabel("# Examinations", fontproperties='Times New Roman', fontsize=45)

        plt.bar(x, y)
        plt.show()
