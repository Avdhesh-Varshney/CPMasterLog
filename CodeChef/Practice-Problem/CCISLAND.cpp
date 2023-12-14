// Chef on Island
// Problem Code - CCISLAND

// https://www.codechef.com/problems/CCISLAND

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	float x, y, xr, yr, d;
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x >> y >> xr >> yr >> d;
	    float a = x / xr;
	    float b = y / yr;
	    float s = (a > b)?b:a;
	    if(s >= d)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}