// Akash and Missing Class
// Problem Code - CHFCLASS

// https://www.codechef.com/problems/CHFCLASS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, count = 0;
	    cin >> n;
	    if(n < 6)
	        cout << "0" << endl;
	    else if(n == 6)
	        cout << "1" << endl;
	    else {
	        int rem = n%7;
	        n /= 7;
	        if(rem < 6)
	            cout << n << endl;
	        else 
	            cout << n+1 << endl;
	    }
	}
	return 0;
}