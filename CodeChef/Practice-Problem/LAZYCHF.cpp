// Lazy Chef
// Problem Code - LAZYCHF

// https://www.codechef.com/problems/LAZYCHF

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x, m, d;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x >> m >> d;
	    if((x*m) >= x+d)
	        cout << x+d << endl;
	    else
	        cout << x*m << endl;
	}
	return 0;
}