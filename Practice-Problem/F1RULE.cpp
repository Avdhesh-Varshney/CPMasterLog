// Miami GP
// Problem Code - F1RULE

// https://www.codechef.com/problems/F1RULE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    float x, y;
	    cin >> x >> y;
	    if((x*107)/100 < y)
	        cout << "no\n";
	    else
	        cout << "yes\n";
	}
	return 0;
}