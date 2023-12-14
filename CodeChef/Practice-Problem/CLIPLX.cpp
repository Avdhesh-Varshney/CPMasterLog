// IPL and RCB
// Problem Code - CLIPLX

// https://www.codechef.com/problems/CLIPLX

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int x, y;
	    cin >> x >> y;
	    if(x > y)
	        cout << x-y << endl;
	    else
	        cout << "0" << endl;
	}
	return 0;
}