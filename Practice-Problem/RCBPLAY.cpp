// RCB and Playoffs
// Problem Code - RCBPLAY

// https://www.codechef.com/problems/RCBPLAY

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    if(x + 2*z >= y) {
	        cout << "yes" << endl;
	    }
	    else
	        cout << "no" << endl;
	}
	return 0;
}