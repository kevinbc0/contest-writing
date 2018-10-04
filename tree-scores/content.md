# Tree Scores
[UTACM 2/23/18 Problem 2](https://www.hackerrank.com/contests/acm-22318/challenges/chess-on-ice)

**Problem Statement**

Johnny is an arborist who likes to plant trees in an *N* by *N* grid and enter his trees into contests. The judges of these contests know that not every tree you plant can be a winner; instead, they look for contiguous rows with exceptional trees.

Explicitly, the scoring works as follows. First, Johnny selects three non-overlapping groups of exactly $K$ contiguous rows in the grid. For each chosen row, he can then select a contiguous subset of trees from that row. The score of each row is the number of trees in that row's subset multiplied by the height of the shortest tree in the subset. The overall score is then computed as the sum of the scores of all rows in the three selected groups.

Johnny is examining the trees of one of his *N* by *N* grids. Given the heights of the trees in the grid, determine the best score Johnny can achieve in the contest.

**Input Format**

The first line of the input will contain an integer, *N*. The next line will contain an integer, *K*. The next *N* lines will contain *N* space-separated integers, where the *i*-th integer *h_i* is the height of the $i$-th tree in that row of the grid.

**Constraints**

$3 \leq N \leq 2000$

$1 \leq K \leq \lfloor N / 3 \rfloor$

$1 \leq h_i \leq 100$

**Output Format**

Output the best score Johnny can achieve with his grid.
