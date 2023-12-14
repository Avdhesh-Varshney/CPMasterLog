// Keplers Law
// Problem Code - KEPLERSLAW

// https://www.codechef.com/problems/KEPLERSLAW

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    float t1, t2, r1, r2;
	    cin >> t1 >> t2 >> r1 >> r2;
	    float a = (t1*t1)/(r1*r1*r1);
	    float b = (t2*t2)/(r2*r2*r2);
	    if(a == b)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}