# Artifact for paper "On the Feasibility of Deduplicating Compiler Bugs with Bisection"

Thank you for evaluating this artifact.

## List of Claims Supported by the Artifact

- Leveraging failure-inducing commits identified by bisection to deduplicate compiler bugs is practically feasible.
- Bisection-based bug deduplication, which combines bisection results with bug-triggering optimizations as the criterion for deduplication, outperforms state-of-the-art analysis-based bug deduplication methods (Tamer and D3) in terms of effectiveness.
- Bisection-based bug deduplication remains largely effective when handling unminimized test programs, thus showing greater generality.

## Setup

- Download this repository and go the root directory of the project `cd BugLens`

## Datasets

Four datasets is used in this study, with each comprising test programs associated with specific compiler versions, as detailed in the table.

|  Dataset   | Number of Programs | Number of Bugs |
| :--------: | :----------------: | :------------: |
| GCC-4.3.0  |        1235        |       29       |
| GCC-4.4.0  |        647         |       11       |
| GCC-4.5.0  |         26         |       7        |
| LLVM-2.8.0 |         80         |       5        |



## RQ1: How effective is using bisection as the sole criterion to deduplicate compiler bugs?

Run the following command to reproduce Figure 1:

```
./plot_curves.py rq1
```



## RQ2: How can false negatives be mitigated when using bisection for compiler bug deduplication?
To repreoduce Figure 3:

```
./plot_curves.py rq2
```



Run the following command to reproduce Table 2 (the data will be printed directly):

```
./evaluate.py
####################################################################################################
### Dataset: gcc430
####################################################################################################
ID, Bisection, Tamer, delta_Tamer, D3, delta_D3
2, 2.06, 2.0, -3.00%, 2.0, -3.00%
3, 3.08, 3.0, -2.67%, 3.16, 2.53%
4, 4.08, 4.16, 1.92%, 4.46, 8.52%
5, 5.71, 5.16, -10.66%, 5.75, 0.70%
6, 6.92, 6.24, -10.90%, 6.94, 0.29%
7, 7.96, 7.77, -2.45%, 8.32, 4.33%
8, 9.35, 9.34, -0.11%, 9.59, 2.50%
9, 10.57, 10.88, 2.85%, 11.12, 4.95%
10, 11.76, 14.52, 19.01%, 12.94, 9.12%
11, 13.24, 17.22, 23.11%, 15.08, 12.20%
12, 15.18, 18.51, 17.99%, 17.53, 13.41%
13, 18.0, 22.62, 20.42%, 19.55, 7.93%
14, 20.16, 27.33, 26.23%, 21.99, 8.32%
15, 24.21, 36.74, 34.10%, 24.56, 1.43%
16, 28.05, 41.67, 32.69%, 27.24, -2.97%
17, 30.76, 44.93, 31.54%, 30.11, -2.16%
18, 34.69, 52.74, 34.22%, 34.01, -2.00%
19, 38.12, 62.13, 38.64%, 38.99, 2.23%
20, 42.57, 67.47, 36.91%, 48.35, 11.95%
21, 57.78, 83.95, 31.17%, 54.86, -5.32%
22, 67.09, 94.89, 29.30%, 61.76, -8.63%
23, 71.18, 112.25, 36.59%, 68.4, -4.06%
24, 77.01, 119.29, 35.44%, 76.5, -0.67%
25, 84.15, 125.72, 33.07%, 91.08, 7.61%
26, 92.8, 142.27, 34.77%, 103.83, 10.62%
27, 99.26, 173.8, 42.89%, 118.84, 16.48%
28, 128.41, 302.32, 57.53%, 132.83, 3.33%
29, 176.23, 489.83, 64.02%, 453.21, 61.12%
p-value (Bisection vs. Tamer): 0.000058
p-value (Bisection vs. D3): 0.038247
####################################################################################################
### Dataset: gcc440
####################################################################################################
ID, Bisection, Tamer, delta_Tamer, D3, delta_D3
2, 2.0, 3.9, 48.72%, 2.72, 26.47%
3, 3.0, 5.92, 49.32%, 4.36, 31.19%
4, 4.0, 7.94, 49.62%, 5.44, 26.47%
5, 5.0, 8.97, 44.26%, 6.61, 24.36%
6, 6.0, 10.92, 45.05%, 8.11, 26.02%
7, 7.0, 14.46, 51.59%, 9.41, 25.61%
8, 8.0, 16.69, 52.07%, 10.74, 25.51%
9, 9.0, 18.43, 51.17%, 11.8, 23.73%
10, 10.0, 20.54, 51.31%, 13.17, 24.07%
11, 16.0, 24.25, 34.02%, 17.81, 10.16%
p-value (Bisection vs. Tamer): 0.001953
p-value (Bisection vs. D3): 0.001953
####################################################################################################
### Dataset: gcc450
####################################################################################################
ID, Bisection, Tamer, delta_Tamer, D3, delta_D3
2, 2.0, 2.2, 9.09%, 2.1, 4.76%
3, 3.12, 4.5, 30.67%, 3.13, 0.32%
4, 5.24, 6.53, 19.75%, 4.8, -9.17%
5, 7.14, 8.81, 18.96%, 7.16, 0.28%
6, 9.66, 12.47, 22.53%, 16.02, 39.70%
7, 11.33, 19.54, 42.02%, 21.64, 47.64%
p-value (Bisection vs. Tamer): 0.031250
p-value (Bisection vs. D3): 0.218750
####################################################################################################
### Dataset: llvm280
####################################################################################################
ID, Bisection, Tamer, delta_Tamer, D3, delta_D3
2, 2.02, 2.13, 5.16%, 2.05, 1.46%
3, 3.54, 4.05, 12.59%, 3.65, 3.01%
4, 7.23, 39.29, 81.60%, 6.09, -18.72%
5, 10.14, 46.66, 78.27%, 11.06, 8.32%
p-value (Bisection vs. Tamer): 0.125000
p-value (Bisection vs. D3): 0.875000
```



## RQ3: Can a bisection-based bug deduplication approach effectively function without test input minimization?

Run the following command to reproduce Figure 4:

```
./plot_curves.py rq3
```



## RQ4: How efficient is the bisection-based bug deduplication in practical settings?

Run the following command to reproduce Table 3 and Figure 5:

```
./rq4
################################################################################
Benchmark: gcc430
Total unique hashes: 569
Avergae: 0.46072874493927124
################################################################################
Benchmark: gcc440
Total unique hashes: 127
Avergae: 0.19598765432098766
################################################################################
Benchmark: gcc450
Total unique hashes: 136
Avergae: 5.230769230769231
################################################################################
Benchmark: llvm280
Total unique hashes: 195
Avergae: 2.4375
```

