// Marathon
// Problem Code - MARARUN

// https://www.codechef.com/problems/MARARUN

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int D, d, a, b,  c;
	    cin >> D >> d >> a >> b >> c;
	    if(D*d < 10)
	        cout << "0" << endl;
	    else if(D*d < 21)
	        cout << a << endl;
	    else if(D*d < 42)
	        cout << b << endl;
	    else
	        cout << c << endl;
	}
	return 0;
}