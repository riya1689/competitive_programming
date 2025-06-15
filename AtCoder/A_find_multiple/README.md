# 2. Problem: A-Find Multiple
**Problem Link:**[AtCoder Problem Link](https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en)

## Problem Statement
Given three integers `a` , `b` and `c`.Printing the number between `a` and `b` (inclusive) which is multiple of `c`.If there is no such number then output will`-1`
## Solution approach
- Input three numbers `a` `b` `c`
- if multiple (c*n) of `c` greater than or equal from `a` and less than or equal from `b` then it compute and print multiple. 
- If not found increase n++ and checking the if condition.
- If the conditon is false ,then print `-1`

## Complexity
- **Time**: O(1) (constant-time operation).
- **Space**: O(1) (no additional memory used).
## Solution Code
[A_counting/solution_a_counting.cpp](A_counting/solution_a_counting.cpp)