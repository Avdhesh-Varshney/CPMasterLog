// Discount
// Problem Code - DISCNT

// https://www.codechef.com/problems/DISCNT

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, cost_Toy = 100, x;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> x;
	    cout << cost_Toy - x << endl;
	}
	return 0;
}