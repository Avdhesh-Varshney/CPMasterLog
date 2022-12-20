// Air Hockey
// Problem Code - AIRHOCKEY

// Problem
// Alice is playing Air Hockey with Bob. The first person to earn seven points wins the match. Currently, Alice's score is AA and Bob's score is BB.
// Charlie is eagerly waiting for his turn. Help Charlie by calculating the minimum number of points that will be further scored in the match before it ends.

// Input Format
// The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
// The first and only line of each test case contains two space-separated integers AA and BB, as described in the problem statement.

// Output Format
// For each test case, output on a new line the minimum number of points that will be further scored in the match before it ends.

// Constraints
// 1 ≤ T ≤ 50
// 0 ≤ A, B ≤ 6

// Sample Input      Sample Output
// 4
// 0 0               7
// 2 5               2
// 5 2               2
// 4 3               3

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    int l = (a>b)?a:b;
	    cout << 7-l << endl;
	}
	return 0;
}