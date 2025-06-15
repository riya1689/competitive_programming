# Problem: A.Four Digit
**Contest:** AtCoder Beginner Contest 222
**Problem Link:**[AtCoder Problem Link](https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en)

## Problem Statement
Given an integer number which is between 0 and 9999 (inclusive).
Printing it as four digit string with necessary number of leading zeros.
## Solution approach
- Input an integer `number`
- using `setw(4)` and `setfill('0')` , printing four digit with leading zeros if needed.

## Complexity
- **Time**: O(1) (constant-time operation).
- **Space**: O(1) (no additional memory used).
## Solution Code
[A_counting/solution_a_counting.cpp](A_counting/solution_a_counting.cpp)