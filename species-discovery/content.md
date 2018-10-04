# Species Discovery
[UTACM 4/20/18 Problem 2](https://www.hackerrank.com/contests/acm-42018/challenges/species-discovery)

**Problem Statement**

Charles and his fellow biologists have discovered a new species of birds! Discovering the species was the easy part; the hard part is deciding on a new name for the birds.

Charles is in a group of *N* biologists, and each biologist comes up with a different name for the new species. Charles notices that every biologist has coincidentally come up with a name that is *N* words long, so he decides the best compromise is to choose a name consisting of one word from each of the made up names. More specifically, the first word of the final name will be the first word of the first biologist's name, the second word of the final name will be the second word of the second biologist's name, and so on.

Help Charles figure out what the final name for this new species will be.

**Input Format**

The first line of the input will contain a single integer *N*, the number of biologists in the group (including Charles). The next *N* lines will each contain *N* space-separated strings, where each string is made up of lowercase letters. Each line represents a made-up name from one of the biologists, and the names will come in order (i.e. the first biologist's name comes first).

**Constraints**

1 <= *N* <= 10

Each word in each name will have length at most 10.

**Output Format**

Output a single line containing *N* space-separated strings, the final name for the new species.
