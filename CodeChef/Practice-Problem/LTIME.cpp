// Lunchtime
// Problem Code - LTIME

// https://www.codechef.com/problems/LTIME

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    if((n >= 1) and (n <= 4))
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}