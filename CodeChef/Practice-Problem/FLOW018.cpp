// Small Factorial
// Problem Code - FLOW018

// https://www.codechef.com/problems/FLOW018

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n, fact = 1;
	cin >> t;
	while(t--) {
	    fact = 1;
	    cin >> n;
	    while(n > 0) {
	        fact *= n;
	        n--;
	    }
	    cout << fact << endl;
	}
	return 0;
}