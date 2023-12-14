// Waiting Time
// Problem Code - WAITTIME

// https://www.codechef.com/problems/WAITTIME

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, k, x;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> k >> x;
	    cout << (7*k) - x << endl;
	}
	return 0;
}