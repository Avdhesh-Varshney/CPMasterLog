// Chef and Lockout Draws
// Problem Code - LOCKDRAW

// https://www.codechef.com/problems/LOCKDRAW

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
	    int l = (a > b)?a:b;
	    int large = (l > c)?l:c;
	    if(large == a) {
	        if(a == b+c)
	            cout << "yes" << endl;
	        else
	            cout << "no" << endl;
	    }
	    else if(large == b) {
	        if(b == a+c)
	            cout << "yes" << endl;
	        else
	            cout << "no" << endl;
	    }
	    else {
	        if(c == a+b)
	            cout << "yes" << endl;
	        else
	            cout << "no" << endl;
	    }
	}
	return 0;
}