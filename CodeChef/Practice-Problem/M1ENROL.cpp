// MATH1 Enrolment
// Problem Code - M1ENROL

// https://www.codechef.com/problems/M1ENROL

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
	    if(y >= x)
	        cout << y-x << endl;
	    else
	        cout << "0\n";
	}
	return 0;
}