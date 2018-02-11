# Who Shot First?
[UTACM 2/9/18 Problem 1](https://www.hackerrank.com/contests/acm-2918/challenges/who-shot-first)

**Problem Statement**

When it comes to standoffs, firing first is crucial. For these blaster-wielding smugglers and bounty hunters, it all comes down to having the faster reaction time. In any given standoff between *N* bounty hunters, the bounty hunter with the lowest reaction time will always shoot their blaster first.

Given *N* bounty hunters in a standoff and their reaction times in milliseconds, determine which bounty hunter will shoot first.

**Input Format**

The first line contains a single integer, *N*. The next *N* lines contain a single integer *R* followed by a string *S* consisting of only uppercase and lowercase letters, where *R* represents the bounty hunter's reaction time in milliseconds and *S* is the name of the bounty hunter. It is guaranteed that there will be exactly one bounty hunter with minimum reaction time (i.e. no ties).

**Constraints**

1 <= *N*, *R* <= 100

**Output Format**

Output the name of the bounty hunter who will shoot first in the standoff.
