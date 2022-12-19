// Rating Improvement
// Problem Code - ADVANCE

// Problem
// Chef's current rating is X, and he wants to improve it. It is generally recommended that a person with rating X should solve problems whose 
// difficulty lies in the range [X, X+200], i.e, problems whose difficulty is at least XX and at most X+200.
// You find out that Chef is currently solving problems with a difficulty of Y.
// Is Chef following the recommended practice or not?

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
// Each test case consists of a single line of input, containing two space-separated integers X, Y.

// Output Format
// For each test case, output on a new line YES if Chef is following the recommended practice style, and NO otherwise.
// Each letter of the output may be printed in either lowercase or uppercase. For example, the strings YES, yEs, and Yes will be considered identical.

// Constraints
// 1 ≤ T ≤ 100
// 1 ≤ X, Y ≤ 4000

// Sample Input      Sample Output
// 5
// 1300 1500         YES
// 1201 1402         NO
// 300 4000          NO
// 723 805           YES
// 1330 512          NO

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y;
	    cin >> x >> y;
	    if(((x+200) >= y) and (x <= y))
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}