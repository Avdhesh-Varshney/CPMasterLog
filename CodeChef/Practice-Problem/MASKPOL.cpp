// Mask Policy
// Problem Code - MASKPOL

// https://www.codechef.com/problems/MASKPOL

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, a;
	    cin >> n >> a;
	    if((n-a) > a)
	        cout << a << endl;
	    else
	        cout << (n-a) << endl;
	}
	return 0;
}