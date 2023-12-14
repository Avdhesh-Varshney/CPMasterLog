// Cyclic Quadrilateral
// Problem Code - CYCLICQD

// https://www.codechef.com/problems/CYCLICQD

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
	    if((a+c == 180) and (b+d == 180))
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}