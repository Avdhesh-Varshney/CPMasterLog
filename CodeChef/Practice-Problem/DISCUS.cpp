// Discus Throw
// Problem Code - DISCUS

// https://www.codechef.com/problems/DISCUS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    if(a > b) {
	        if(a > c)
	            cout << a << endl;
	        else
	            cout << c << endl;
	    }
	    else {
	        if(b > c)
	            cout << b << endl;
	        else
	            cout << c << endl;
	    }
	}
	return 0;
}