// Minimum Coins
// Problem Code - MINCOINSREQ

// https://www.codechef.com/problems/MINCOINSREQ

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x;
	    cin >> x;
	    int count = x/10;
	    cout << x-(10*count) << endl;
	}
	return 0;
}