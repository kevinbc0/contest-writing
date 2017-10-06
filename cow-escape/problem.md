# Cow Escape
[UTACM 9/22/17 Problem 4](https://www.hackerrank.com/contests/acm-922/challenges/cow-escape)

**Problem Statement**

John, like most aliens, enjoys abducting cows with his UFO. After he has captured his cows, he puts them in labyrinths so that they don't escape. However, John always forgets to seal the exit of his labyrinths before going out to abduct more cows. Luckily for John, his labyrinths use advanced alien technology that makes it tough for cows to escape by modifying the strength of gravity the cow experiences depending on which direction the cow moves.

John needs to be able to determine whether a cow is able to escape the labyrinth in which it is trapped. Each labyrinth is an M by N matrix, where 'X' represents a wall, '.' represents an open path, 'C' represents the starting position of the cow, and 'E' represents the exit of the labyrinth. Each cow starts with a certain amount of energy, E, and can only move up, down, left, or right. Every labyrinth has four values G<sub>up</sub>, G<sub>down</sub>, G<sub>left</sub>, and G<sub>right</sub> that denote how much energy a step in each direction will cost for the cow. The labyrinths are also designed such that at each point in the path out, there is only one possible choice for the next step. A cow is able to escape the labyrinth if it can reach the exit with 0 or more energy units.

Given all this information, help John determine if a cow will escape. If it does, determine how much energy the cow has left upon exiting.

**Input Format**

The first line of input contains two integers, M and N. The next M lines will contain strings of length N containing only the characters 'X', '.', 'C', and 'E' representing the labyrinth. Each labyrinth is guaranteed to contain only one 'C' and one 'E' reachable by the 'C'.

The next line of input will contain a single integer, E. The next and final line of input will contain four integers, G_up, G_down, G_left, and G_right (in that order).

**Constraints**

2 <= M, N <= 50  
1 <= E, G<sub>up</sub>, G<sub>down</sub>, G<sub>left</sub>, G<sub>right</sub> <= 10^4

**Output Format**

If the cow escapes, output the amount of energy the cow has left upon exiting as an integer. Otherwise, output -1.
