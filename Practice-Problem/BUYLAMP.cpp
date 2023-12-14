// Buy Lamps
// Problem Code - BUYLAMP

// https://www.codechef.com/problems/BUYLAMP

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, k, x, y;
	    cin >> n >> k >> x >> y;
	    int small = (x> y)? y : x;
	    cout << (k*x) + ((n-k)*small) << endl;
	}
	return 0;
}