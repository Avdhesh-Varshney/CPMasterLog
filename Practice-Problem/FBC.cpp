// Fill The Bucket
// Problem Code - FBC

// https://www.codechef.com/problems/FBC

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int k, x;
	    cin >> k >> x;
	    cout << k-x << endl;
	}
	return 0;
}