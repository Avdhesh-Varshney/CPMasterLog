// Get Subscription
// Problem Code - SUBSCRIBE

// https://www.codechef.com/problems/SUBSCRIBE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, x;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x;
	    if(x > 30)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}