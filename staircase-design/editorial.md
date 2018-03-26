This problem can be solved with dynamic programming. Consider the following bottom-up approach:

*dp*[i][j] contains the number of ways you can make valid staircases with *i* blocks where the last step has height at most *j*. Observe the following:

*dp*[i][j] = *dp*[i][j - 1] + (*dp*[i - j][j - 1] - *dp*[i - j][j - k - 1])

Fill an *N* by *N* table bottom-up. The solution will be *dp*[n][n].
