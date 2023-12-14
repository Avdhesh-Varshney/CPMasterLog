// Second Largest
// Problem Code - FLOW017

// https://www.codechef.com/problems/FLOW017

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
    	int x = (a>b)?a:b;
    	int l = (x>c)?x:c;
    	x = (a>b)?b:a;
    	int s = (x>c)?c:x;
    	if((l == a) or (s == a)) {
    	    if((l == b) or (s == b))
    	        cout << c << endl;
    	    else if((l == c) or (s == c))
    	        cout << b << endl;
    	}
    	else {
    	    cout << a << endl;
    	}
    }
	return 0;
}