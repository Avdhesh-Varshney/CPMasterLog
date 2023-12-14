// Chef and Profits
// Problem Code - CHFPROFIT

// https://www.codechef.com/problems/CHFPROFIT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    cout << (x*z) - (x*y) << endl;
	}
	return 0;
}