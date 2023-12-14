// Car Range
// Problem Code - CARRANGE

// https://www.codechef.com/problems/CARRANGE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int p, m, v;
	    cin >> p >> m >> v;
	    cout << (m+1-p)*v << endl;
	}
	return 0;
}