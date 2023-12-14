// Chairs Requirement
// Problem Code - CHAIRS_

// https://www.codechef.com/problems/CHAIRS_

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y;
	    cin >> x >> y;
	    if(x >= y) {
	        cout << x-y << endl;
	    }
	    else
	        cout << "0" << endl;
	}
	return 0;
}