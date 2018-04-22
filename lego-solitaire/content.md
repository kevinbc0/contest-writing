# Lego Solitaire
[UTACM 4/13/18 Problem 5](https://www.hackerrank.com/contests/acm-41318/challenges/lego-solitaire)

**Problem Statement**

Kirk likes to play a game he invented called Lego solitaire, a single-player game that involves matching pairs of Lego bricks. In this game, a set of Lego bricks is placed in a certain arrangement, and Kirk tries to remove all of the bricks. In the arrangement, each brick can have multiple adjacent bricks above it.

The rules of the game are simple. A brick is said to be exposed if there are no adjacent bricks above it. Each brick will be specified with a color, and two bricks of the same color are said to be matching. Each turn, Kirk removes a pair of exposed matching bricks with the goal of removing all bricks.

Kirk needs your help while he plays his game. More specifically, he wants to know if the pairs of bricks he chooses are valid for removal and how many valid pairs of matching exposed bricks there currently are.

**Input Format**

The first line of the input will contain the total number of bricks *N*, numbered from 1 to *N*. For each brick *i*, the input will contain the following:

- a single line with an integer *C_i$*and an integer *M_i*, where *C_i* denotes the color of the brick and *M_i* denotes the number of adjacent bricks that the brick is above
- *M_i* lines containing a single integer listing the adjacent bricks that brick *i* is above. In other words, the bricks in this list cannot be removed until brick *i* is removed.

Note that the bricks can be of arbitrary shape, so no assumptions can be made about whether the brick dependencies are acyclic.

Next will follow a line containing an integer *Q*, the number of queries to answer. *Q* lines containing queries follow. There are two kinds of queries:

- Queries of the form "1 *x* *y*", asking if removing the pair of bricks *x* and *y* is a valid move. For this type of query, perform the removal if the move is valid. The *x* and *y* given will not have already been removed, and *x* will not equal *y*.
- Queries of the form "2 0 0", asking how many valid pairs of matching exposed bricks there currently are.

**Constraints**

1 <= N <= 10^5

1 <= C_i <= 8

1 <= M_i <= 10

1 <= Q <= 10^4

**Output Format**

For each type 1 query, output "Nice move!" and perform the removal if the query represents a matching of valid bricks (i.e. bricks are matching and exposed), otherwise output "Nice try!".

For each type 2 query, output an integer representing the number of valid pairs of matching exposed bricks there are. (Note that if you have 3 exposed bricks of the same color, this represents 3 valid pairs as you can take any two bricks from the 3 to form a pair).

Print the responses to each query on a separate line.
