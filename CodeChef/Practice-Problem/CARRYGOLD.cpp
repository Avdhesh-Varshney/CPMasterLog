// Gold Mining
// Problem Code - CARRYGOLD

// https://www.codechef.com/problems/CARRYGOLD

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x, y;
	    cin >> n >> x >> y;
	    if(((n+1)*y) >= x)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}