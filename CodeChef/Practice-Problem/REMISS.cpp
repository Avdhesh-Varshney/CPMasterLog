// Chef and Remissness
// Problem Code - REMISS

// https://www.codechef.com/problems/REMISS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    int l = (a > b)?a:b;
	    cout << l << "  " << a+b << endl;
	}
	return 0;
}