// Valid Triangles
// Problem Code - FLOW013

// https://www.codechef.com/problems/FLOW013

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, a, b, c;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> a >> b >> c;
	    int s = a+b+c;
	    if(s == 180) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}