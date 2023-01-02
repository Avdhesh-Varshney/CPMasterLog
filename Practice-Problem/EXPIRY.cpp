// Expiring Bread
// Problem Code - EXPIRY

// https://www.codechef.com/problems/EXPIRY

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, m, k;
	    cin >> n >> m >> k;
	    if(n <= (m*k))
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}