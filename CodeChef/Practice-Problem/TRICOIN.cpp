// Coins And Triangle
// Problem Code - TRICOIN

// https://www.codechef.com/problems/TRICOIN

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int i;
	    for(i = 1; i <= n; i++) {
	        for(int j = 1; j <= i; j++) {
	            n--;
	        }
	    }
	    if(n >= 0)
	        cout << i-1 << endl;
	    else
	        cout << i-2 << endl;
	}
	return 0;
}