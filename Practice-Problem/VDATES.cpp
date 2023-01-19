// Vaccine Dates 
// Problem Code - VDATES

// https://www.codechef.com/problems/VDATES

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int d, l, r;
	    cin >> d >> l >> r;
	    if(d < l)
	        cout << "Too Early" << endl;
	    else if(d > r)
	        cout << "Too Late" << endl;
	    else
	        cout << "Take second dose now" << endl;
	}
	return 0;
}