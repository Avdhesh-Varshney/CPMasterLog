// Avoid Contact
// Problem Code - AVOIDCONTACT

// https://www.codechef.com/problems/AVOIDCONTACT

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
	    if(y == 0)
	        cout << x << endl;
	    else if(x == y)
	        cout << x+y-1 << endl;
	    else
	        cout << x+y << endl;
	}
	return 0;
}