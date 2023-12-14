// Game Between Friends
// Problem Code - FRGAME

// https://www.codechef.com/problems/FRGAME

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    if(a >= b) {
	        if(a >= b+c) {
	            if(a >= b+c+d)
	                cout << "N" << endl;
	            else
	                cout << "S" << endl;
	        }
	        else {
	            if(a+d >= b+c)
	                cout << "N" << endl;
	            else
	                cout << "S" << endl;
	        }
	    }
	    else {
	        if(a+c >= b) {
	            if(a+c >= b+d)
	                cout << "N" << endl;
	            else
	                cout << "S" << endl;
	        }
	        else {
	            if(a+c+d >= b)
	                cout << "N" << endl;
	            else
	                cout << "S" << endl;
	        }
	    }
	}
	return 0;
}