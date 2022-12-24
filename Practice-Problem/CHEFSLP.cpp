// Chef and Pairing Slippers
// Problem Code - CHEFSLP

// https://www.codechef.com/problems/CHEFSLP

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, l, x;
	    cin >> n >> l >> x;
	    if(l > n-l)
	        cout << (n-l)*x << endl;
	    else
	        cout << l*x << endl;
	}
	return 0;
}