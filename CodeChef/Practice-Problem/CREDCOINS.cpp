// CRED Coins
// Problem Code - CREDCOINS

// https://www.codechef.com/problems/CREDCOINS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y;
	    cin >> x >> y;
	    cout << (x*y)/100 << endl;
	}
	return 0;
}