// Air Hockey
// Problem Code - AIRHOCKEY

// https://www.codechef.com/problems/AIRHOCKEY

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    int l = (a>b)?a:b;
	    cout << 7-l << endl;
	}
	return 0;
}