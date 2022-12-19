// Age Limit
// Problem Code - AGELIMIT

// Problem
// Chef wants to appear in a competitive exam. To take the exam, there are following requirements:
// Minimum age limit is X (i.e. Age should be greater than or equal to X).
// Age should be strictly less than Y.
// Chef's current Age is A. Find whether he is currently eligible to take the exam or not.

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case consists of a single line of input, containing three integers X, Y and A as mentioned in the statement.

// Output Format
// For each test case, output YES if Chef is eligible to give the exam, NO otherwise.
// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

// Constraints
// 1 ≤ T ≤ 1000
// 20 ≤ X < Y ≤ 40
// 10 ≤ A ≤ 50

// Sample Input      Sample Output
// 5
// 21 34 30          Yes
// 25 31 31          No
// 22 29 25          Yes
// 20 40 15          No
// 28 29 28          Yes

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x, y, a;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x >> y >> a;
	    if((a >= x) and (a < y))
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}