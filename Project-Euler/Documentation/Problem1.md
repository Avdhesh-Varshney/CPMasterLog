# Problem 1 - Multiples of 3 and 5 🖋️

<br>

## Description 📃

Find the sum of all the multiples of 3 or 5 below N.

<br>

## Intuition 📄

The intuition of this code calculates the sum of multiples of 3 and 5 below a given input `n` while avoiding double-counting multiples of 15 (common elements). It then subtracts `n` if it's a multiple of 3 or 5.

<br>

## Approach 📜

- Read the input `t` for the number of test cases.
- For each test case, read the input `n` and initialize `ans` to 0.
- Calculate the sum of multiples of 3 below `n` using the arithmetic progression formula.
- Calculate the sum of multiples of 5 below `n` using the same formula.
- Subtract the sum of multiples of 15 to avoid double-counting.
- If `n` is a multiple of 3 or 5, subtract it from `ans` to correct for overcounting.
- Print `ans` as the result for the current test case.

<br>

## Complexities 📎

- Time Complexity - O(t), where `t` is the number of test cases.
- Space Complexity - O(1)

<br>

## Code/Solution 👨‍💻

[C](https://github.com/Avdhesh-Varshney/CPMasterLog/blob/main/Project-Euler/C/Problem1.c) <br>
[C++](https://github.com/Avdhesh-Varshney/CPMasterLog/blob/main/Project-Euler/C%2B%2B/Problem1.cpp) <br>
[Java](https://github.com/Avdhesh-Varshney/CPMasterLog/blob/main/Project-Euler/Java/Problem1.java) <br>
[JavaScript](https://github.com/Avdhesh-Varshney/CPMasterLog/blob/main/Project-Euler/JavaScript/Problem1.js) <br>
[Python](https://github.com/Avdhesh-Varshney/CPMasterLog/blob/main/Project-Euler/Python/Problem1.py)

<br>

### Happy Coding 🧑‍💻

