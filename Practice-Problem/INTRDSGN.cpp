// Interior Design
// Problem Code - INTRDSGN

// https://www.codechef.com/problems/INTRDSGN

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x1, x2, y1, y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    if((x1+y1) >= (x2+y2))
	        cout << (x2+y2) << endl;
	    else
	        cout << (x1+y1) << endl;
	}
	return 0;
}