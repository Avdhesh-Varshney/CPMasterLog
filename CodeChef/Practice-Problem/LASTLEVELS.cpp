// The Last Levels
// Problem Code - LASTLEVELS

// https://www.codechef.com/problems/LASTLEVELS

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
	    if(x%3 != 0)
    	    cout << (x*y) + z*(x/3) << endl;
    	else
    	    cout << (x*y) + z*((x/3)-1) << endl;
	}
	return 0;
}