// Tyre problem
// Problem Code - TYRE

// https://www.codechef.com/problems/TYRE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, m;
	    cin >> n >> m;
	    cout << (2*n) + (4*m) << endl;
	}
	return 0;
}