// AND Plus OR
// Problem Code - ANDOR

// Problem
// Given an integer x, find two non-negative integers a and b such that (a ∧ b)+(a ∨ b) = x, where ∧ is the bitwise AND operation and ∨ is the bitwise OR operation.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains a single integer x.

// Output
// If there is no valid pair (a, b), print a single line containing the integer −1. Otherwise, print a single line containing two space-separated integers a and b.
// If there are multiple solutions, you may print any one of them.

// Constraints
// 1 ≤ T ≤ 10^5
// 1 ≤ x ≤ 10^18

// Subtasks
// Subtask #1 (30 points):
// 1 ≤ T ≤ 200
// 1 ≤ x ≤ 200
// Subtask #2 (70 points): original constraints

// Sample Input      Sample Output
// 2
// 1                 0 1
// 8                 5 3

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    long long int x;
    cin >> t;
    while(t--) {
        cin >> x;
        cout << "0 "<<x<< endl;
    }
    return 0;
}