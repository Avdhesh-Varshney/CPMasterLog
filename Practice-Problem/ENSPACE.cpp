// Enough Space
// Problem Code - ENSPACE

// https://www.codechef.com/problems/ENSPACE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n, x, y;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> n >> x >> y;
	    if(n >= (x + 2*y))
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}