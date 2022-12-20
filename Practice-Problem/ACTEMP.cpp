// Air Conditioner Temperature
// Problem Code - ACTEMP

// Problem
// There are three people sitting in a room - Alice, Bob, and Charlie. They need to decide on the temperature to set on the air conditioner. Everyone has a demand each:
// Alice wants the temperature to be at least A degrees.
// Bob wants the temperature to be at most B degrees.
// Charlie wants the temperature to be at least C degrees.
// Can they all agree on some temperature, or not?

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of a single line which contains three integers - A, B, C.

// Output Format
// For each test case, output on a new line, "Yes" or "No". "Yes", if they can decide on some temperature which fits all their demands. Or "No", if no temperature fits all their demands.
// You may print each character of the string in either uppercase or lowercase (for example, the strings NO, nO, No, and no will all be treated as identical).

// Constraints
// 1 ≤ T ≤ 100
// 1 ≤ A, B, C ≤ 100

// Subtasks
// Subtask 1 (10 points): 1 ≤ M ≤ 10
// Subtask 2 (20 points): The sum of N across all test cases won't exceed 2020.
// Subtask 3 (70 points): No further constraints.

// Sample Input      Sample Output
// 4
// 30 35 25          Yes
// 30 35 40          No
// 30 35 35          Yes
// 30 25 35          No

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a <= b && c <= b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}