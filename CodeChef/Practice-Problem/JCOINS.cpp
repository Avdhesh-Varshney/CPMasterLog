// Janmansh and Coins
// Problem Code - JCOINS

// https://www.codechef.com/problems/JCOINS

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
	    cout << (10*x) + (5*y) << endl;
	}
	return 0;
}