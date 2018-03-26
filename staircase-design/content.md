# Staircase Design
[UTACM 3/23/18 Problem 6](https://www.hackerrank.com/contests/acm-32318/challenges/staircase-design)

**Problem Statement**

Frank is an architect in charge of blueprinting a new hotel. Since Frank is a good architect, he knows that staircase design is crucial to high-end hotels.

Each step of a staircase is built with individual blocks, and the height of each step is given by the number of blocks used to build it. For a staircase to be valid, the following conditions must hold:

- It must consist of at least two steps (and each step must contain at least one brick)
- Each step must have a strictly greater height than the previous step
- The difference in height between two consecutive steps can be at most *K*, and the height of the first step can be at most *K*

Frank knows that he has *N* blocks to work with, and he has a specific value in mind for *K*. Given this, help him figure out how many different valid staircase designs there are that use all *N* blocks. The number of possibilities may be large, so output the number modulo 10<sup>9</sup> + 7.

**Input Format**

The first two lines each contain a single string, the two countries competing in the match. The next 10 lines contain a string *S* and an integer *N*, where *S* denotes which country scored in that end and *N* denotes how many points were scored.

**Constraints**

1 <= *N* <= 8

**Output Format**

Output the country that wins the match. In the case of a tie, print 'Tie'.