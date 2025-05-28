#!/usr/bin/env python3

import os
import sys
import csv

def clone_repo():
    # clone gcc or llvm-project id they are not cloned
    if not os.path.exists("./gcc"):
        os.system("git clone https://github.com/gcc-mirror/gcc.git")
    if not os.path.exists("./llvm-project"):
        os.system("git clone https://github.com/llvm/llvm-project.git")

def get_commit_time(commit_hash):
    cmd = "cd ./gcc && git show -s --format=%ct {} && cd ../".format(commit_hash) if "llvm" not in bad_compiler_version else "cd ./llvm-project && git show -s --format=%ct {} && cd ../".format(commit_hash)
    commit_time = os.popen(cmd).read().strip()
    if commit_time == "":
        return None
    return int(commit_time)

skip_case_map = {
    "gcc-4.3.0" : [],
    "gcc-4.4.0" : ["60", "185", "273", "336", "418", "445"],
    "gcc-4.5.0" : ["13", "16"],
    "llvm-2.8.0" : ["51", "0", "116", "111", "118", "120", "121", "119", "110", "117", "112", "115", "123", "124", "122", "113", "114", "74", "19", "86", "91", "54", "107", "37", "106", "64", "48", "70", "23", "49",]
}

if __name__ == "__main__":

    if len(sys.argv) != 5:
        print("Usage: {} <benchmark_dir> <output_csv> <bad_compiler_version> <source_file_type>".format(sys.argv[0]))
        sys.exit(1)

    benchmark_dir = sys.argv[1]
    output_csv = sys.argv[2]
    bad_compiler_version = sys.argv[3]
    source_file_type = sys.argv[4] # orig or small

    if bad_compiler_version != "gcc-4.3.0" and bad_compiler_version != "gcc-4.4.0" and bad_compiler_version != "gcc-4.5.0" and bad_compiler_version != "llvm-2.8.0":
        print("Error: invalid bad_compiler_version")
        sys.exit(1)

    clone_repo()

    all_pass_file = "./optimization_lists/{}/all.txt".format(bad_compiler_version)
    all_passes = []
    if os.path.exists(all_pass_file):
        with open(all_pass_file, 'r') as f:
            lines = f.readlines()
            for line in lines:
                all_passes.append(line.strip())

    # write the header of the csv file
    with open(output_csv, 'w') as csv_file:
        csv_file.write("filename,bug_id,bisection_result,commit_time,bad_opt_level,passes_to_enable_vector,passes_to_enable\n")


    for dir in os.listdir(benchmark_dir):
        if not os.path.isdir(os.path.join(benchmark_dir, dir)):
            continue

        if dir in skip_case_map[bad_compiler_version]:
            # print("Skipping case {}".format(dir))
            continue

        base_name = dir

        bug_id_file = os.path.join(benchmark_dir, dir, "bug.id")
        bisection_result_file = os.path.join(benchmark_dir, dir, "bisection_{}.result".format(source_file_type))
        bad_opt_file = os.path.join(benchmark_dir, dir, "bad_opt.txt")
        minimal_opt_passes_file = os.path.join(benchmark_dir, dir, "minimal_opt_flags_{}.txt".format(source_file_type))

        bug_id = None
        bisection_result = None
        commit_time = 0
        bad_opt = None
        passes_to_enable_vector = None
        passes_to_enable = ""

        if os.path.exists(bug_id_file):
            bug_id = open(bug_id_file).read().strip()

        if os.path.exists(bisection_result_file):
            bisection_result = open(bisection_result_file).read().strip()

        if bisection_result is not None and bisection_result != "":
            commit_hash = bisection_result.split()[0]
            commit_time = get_commit_time(commit_hash)

        if os.path.exists(bad_opt_file):
            bad_opt = open(bad_opt_file).read().strip()

        if os.path.exists(minimal_opt_passes_file):
            enabled_passed = []
            with open(minimal_opt_passes_file, 'r') as f:
                lines = f.readlines()
                for line in lines:
                    enabled_passed.append(line.strip())
                    passes_to_enable += line.strip() + ","

            for p in all_passes:
                if p in enabled_passed:
                    if passes_to_enable_vector is None:
                        passes_to_enable_vector = "1"
                    else:
                        passes_to_enable_vector += ",1"
                else:
                    if passes_to_enable_vector is None:
                        passes_to_enable_vector = "0"
                    else:
                        passes_to_enable_vector += ",0"

        with open(output_csv, 'a') as csv_file:
            writer = csv.writer(csv_file, quoting=csv.QUOTE_MINIMAL)
            writer.writerow([base_name,
                                bug_id,
                                bisection_result,
                                commit_time,
                                bad_opt,
                                passes_to_enable_vector,
                                passes_to_enable,
                            ])

print("Exported the results to {}".format(output_csv))