# Problem: Make it white
**Contest:** Codeforces Round 923 (Div. 3)
**Problem Link:**[Codeforces Problem Link](https://codeforces.com/problemset/problem/1927/A)


## Problem Statement
Minimum white segment painting.Making black cells white.

## Solution approach
- Input test case `t` , `n` (length of the strip) and a string `s` of length `n`(`'W'` or `'B'` )
- Using String STL `fast_find_of()` and `last_find_of()` to search the first and last position of `'B'`
- Minimum length = `(last_find_of() - fast_find_of() ) + 1`

## Complexity
- **Time**: O(n) 
- **Space**: O(n) per test case (stores the string)
## Solution Code
[A_counting/solution_a_counting.cpp](A_counting/solution_a_counting.cpp)