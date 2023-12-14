// Presents for Cheffina
// Problem Code - PRESENTS

// https://www.codechef.com/problems/PRESENTS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    cout << n - (n/5) << endl;
	}
	return 0;
}