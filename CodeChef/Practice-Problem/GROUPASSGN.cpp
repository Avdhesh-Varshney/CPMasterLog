// Group Assignment
// Problem Code - GROUPASSGN

// https://www.codechef.com/problems/GROUPASSGN

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x;
	    cin >> n >> x;
	    cout << 2*n - (x-1) << endl;
	}
	return 0;
}