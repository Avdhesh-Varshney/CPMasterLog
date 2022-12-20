// Apples and Oranges
// Problem Code - APPLORNG

// Problem
// Bob has X rupees and goes to a market. The cost of apples is Rs. A per kg and the cost of oranges is Rs. B per kg.
// Determine whether he can buy at least 1 kg each of apples and oranges.

// Input Format
// The first line of input will contain an integer X, the amount of money Bob has.
// The second line of input contains two space-separated integers A and B, the cost per kg of apples and oranges respectively.

// Output Format
// Print a single line containing Yes if Bob can buy the fruits and No otherwise.
// You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).

// Constraints
// 1 ≤ X, A, B ≤ 10^5
 
// Subtasks
// Subtask 1 (100 points):
// Original constraints.

// Sample Input      Sample Output
// 14                Yes
// 2 2

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int x, a, b;
	cin >> x >> a >> b;
	if(x >= (a+b))
	    cout << "YES\n";
	else
	    cout << "NO\n";
	return 0;
}