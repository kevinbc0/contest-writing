# Tree Scores
[UTACM 4/20/18 Problem 6](https://www.hackerrank.com/contests/acm-42018/challenges/tree-scores)

**Problem Statement**

Johnny is an arborist who likes to plant trees in an *N* by *N* grid and enter his trees into contests. The judges of these contests know that not every tree you plant can be a winner; instead, they look for contiguous rows with exceptional trees.

Explicitly, the scoring works as follows. First, Johnny selects three non-overlapping groups of exactly *K* contiguous rows in the grid. For each chosen row, he can then select a contiguous subset of trees from that row. The score of each row is the number of trees in that row's subset multiplied by the height of the shortest tree in the subset. The overall score is then computed as the sum of the scores of all rows in the three selected groups.

Johnny is examining the trees of one of his *N* by *N* grids. Given the heights of the trees in the grid, determine the best score Johnny can achieve in the contest.

**Input Format**

The first line of the input will contain an integer, *N*. The next line will contain an integer, *K*. The next *N* lines will contain *N* space-separated integers, where the *i*-th integer *h<sub>i</sub>* is the height of the *i*-th tree in that row of the grid.

**Constraints**

3 <= *N* <= 2000

1 <= *K* <= floor(*N*/3)

1 <= *h<sub>i</sub>* <= 100

**Output Format**

Output the best score Johnny can achieve with his grid.
