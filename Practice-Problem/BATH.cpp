// Bath in Winters
// Problem Code - BATH

// https://www.codechef.com/problems/BATH

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
	    cout << x/(2*y) << endl;
	}
	return 0;
}