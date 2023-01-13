// Total Prize Money
// Problem Code - PRIZEPOOL

// https://www.codechef.com/problems/PRIZEPOOL

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
	    cout << (10*x) + (90*y) << endl;
	}
	return 0;
}