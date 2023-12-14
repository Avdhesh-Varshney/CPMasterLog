// Finding Shoes
// Problem Code - FINDSHOES

// https://www.codechef.com/problems/FINDSHOES

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, m;
	    cin >> n >> m;
	    if((n-m) < 0)
	        cout << n << endl;
	    else
	        cout << (2*n) - m << endl;
	}
	return 0;
}