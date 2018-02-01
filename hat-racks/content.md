# Hat Racks
[UTACM 10/16/17 Problem 4](https://www.hackerrank.com/contests/acm-106/challenges/hat-racks)

**Problem Statement**

You're planning to throw a party, and like all good party hosts, you know you need to set up an appropriate number of hat racks so guests have a place to put their hats.

The venue you've rented for the party has guest entrances all along a wall that is *N* units long. In order to keep guests coming from all entrances happy, you decide that there must be at least one hat rack within two units of every entrance. In other words, given an entrance at unit *I*, there must be a hat rack somewhere in the range *I - 2* to *I + 2*, inclusive. Note that hat racks cannot be placed at the same location as entrances.

Given these requirements, determine the minimum number of hat racks you'll need to keep all guests happy.

**Input Format**

The first line contains a single integer, *N*. The next line contains a single string of length *N* consisting of '.'s and 'E's, where 'E's represent entrances and '.'s represent empty spots where hat racks can be placed.

**Constraints**

1 <= *N* <= 10<sup>5</sup>

**Output Format**

If it is possible to keep all guests happy, output the minimum number of hat racks needed as an integer. Otherwise, output -1.
