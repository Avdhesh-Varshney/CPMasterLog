// Best Coupon
// Problem Code - CHEAPFOOD

// https://www.codechef.com/problems/CHEAPFOOD

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
	    if(x/10 <= 100)
	        cout << "100\n";
	    else
	        cout << x/10 << endl;
	}
	return 0;
}