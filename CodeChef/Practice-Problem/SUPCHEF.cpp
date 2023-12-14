// The Preparations
// Problem Code - SUPCHEF

// https://www.codechef.com/problems/SUPCHEF

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int m, n, k;
	    cin >> m >> n >> k;
	    if(m > (n*k))
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}