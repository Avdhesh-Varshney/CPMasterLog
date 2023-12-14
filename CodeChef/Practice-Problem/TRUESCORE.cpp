// Is the Score Consistent
// Problem Code - TRUESCORE

// https://www.codechef.com/problems/TRUESCORE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    if((a <= c) and (b <= d))
	        cout << "possible\n";
	    else
	        cout << "impossible\n";
	}
	return 0;
}