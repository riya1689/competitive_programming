# 1. Problem: A-Counting
**Contest:** AtCoder Beginner Contest 222
**Problem Link:**[AtCoder Problem Link](https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en)


## Problem Statement
Given two integers `a` and `b`.Printing the number of integers not less than `a` and not more than `B`

## Solution approach
- Input two numbers
- Uses a **ternary operator** for conditional logic
- If `a > b`, output `0`.
    - Else it calculates the count of integers between `a`and `b` using mathematical formula `(b-a)+1` and store it in `count`

## Complexity
- **Time**: O(1) (constant-time operation).
- **Space**: O(1) (no additional memory used).
## Solution Code
[solution_make_it_white.cpp](Codeforces/make_it_white/solution_make_it_white.cpp)