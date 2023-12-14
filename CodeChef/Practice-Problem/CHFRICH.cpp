// Richie Rich
// Problem Code - CHFRICH

// https://www.codechef.com/problems/CHFRICH

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b, x;
	    cin >> a >> b >> x;
	    cout << (b-a)/x << endl;
	}
	return 0;
}