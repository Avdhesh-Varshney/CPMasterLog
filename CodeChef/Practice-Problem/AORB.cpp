// A or B
// Problem Code - AORB

// https://www.codechef.com/problems/AORB

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;\
	    int x = 1500 - 6*a - 4*b;
	    int y = 1500 - 6*b - 2*a;
	    if(x > y)
	        cout << x << endl;
	    else
	        cout << y << endl;
	}
	return 0;
}