// Three Friends
// Problem Code - THREEFR

// https://www.codechef.com/problems/THREEFR

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here a = x+b and b = y+c and c = z+a
	/*	a = x+y+c ==> a = x+y+z+a ==> x+y+z = 0;	*/
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    if(x+y-z == 0)
	        cout << "yes" << endl;
	    else if(x-y+z == 0)
	        cout << "yes" << endl;
	    else if(y+z-x == 0)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}