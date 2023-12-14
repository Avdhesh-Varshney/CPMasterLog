// Age Limit
// Problem Code - AGELIMIT

// https://www.codechef.com/problems/AGELIMIT

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