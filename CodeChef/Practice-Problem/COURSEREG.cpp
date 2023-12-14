// Course Registration
// Problem Code - COURSEREG

// https://www.codechef.com/problems/COURSEREG

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, m, k;
	    cin >> n >> m >> k;
	    if((n+k) <= m)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	return 0;
}