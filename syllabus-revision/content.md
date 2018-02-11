# Syllabus Revision
[ABCS/HACS 2/2/2018](https://www.hackerrank.com/contests/abcshacs-22/challenges/syllabus-revision)

**Problem Statement**

It's a new semester and Professor Duncan needs to prepare assignments for his Introduction to Psychology class. Since Duncan aims to use as little effort as possible, he wants to reuse as many assignments as he can from the previous semester. However, he has noticed that his students tend to do poorly on larger assignments that are due 3 or more weeks after they are assigned. Duncan cares greatly about his students' success, so he decides it best to remove all such assignments from his syllabus for the upcoming semester.

For each week in the semester, Professor Duncan's syllabus lists both all assignments that are released and all assignments that are due. All assignment names show up on the syllabus exactly twice; once on the week it is released, and once on the week it is due. Assignments are all due and released on the same day and at the same time for a given week, so releasing an assignment on Week *M* and having it due on Week *N* gives students *N - M* weeks to work on that assignment.

Given Professor Duncan's syllabus from the previous semester, make the appropriate modifications so that assignments that are due 3 or more weeks after they are assigned are removed.

**Input Format**

The first line contains a single integer *W* denoting the number of weeks in the semester. The next *W* lines each start with an integer *A*, the number of assignments that are either released or due that week. Each of the *W* lines is then followed by *A* space-separated strings representing assignment names.

Every assignment name will show up exactly twice. The first appearance means the assignment is released that week, and the second means the assignment is due that week. 

**Constraints**

1 <= *W* <= 10<sup>2</sup>
1 <= *A* <= 10<sup>2</sup>

**Output Format**

Output the revised syllabus with each week on a separate line. For each week, output the names of all assignments released/due that week with names separated by spaces. Be sure to maintain the order of assignments within a week from the previous syllabus. For weeks where no assignments are released/due, output "None".
