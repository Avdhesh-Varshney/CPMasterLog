// Aternate Additions
// Problem Code - ALTERADD

// Problem
// Chef has 2 numbers A and B (A < B).
// Chef will perform some operations on A.
// In the i_th operation:
// Chef will add 1 to A if i is odd.
// Chef will add 2 to A if i is even.
// Chef can stop at any instant. Can Chef make A equal to B?

// Input Format
// The first line contains a single integer T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two space separated integers A and B.
// Output Format
// For each test case, output YES if Chef can make A and B equal, NO otherwise.
// Note that the checker is case-insensitive. So, YES, Yes, yEs are all considered same.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A < B ≤ 10^9

// Sample Input      Sample Output
// 4
// 1 2               YES
// 3 6               YES
// 4 9               NO
// 10 20             YES

// Solution:
#include <iostream>
using namespace std;
void addition(int a, int b) {
    int d = abs(a-b);
    if(d%6 == 2)
        cout << "NO" << endl;
    else if(d%6 == 5)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    long int a, b;
	    cin >> a >> b;
	    addition(a,b);
	}
	return 0;
}