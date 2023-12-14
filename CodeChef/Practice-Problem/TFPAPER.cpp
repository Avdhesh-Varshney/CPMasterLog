// True and False Paper
// Problem Code - TFPAPER

// https://www.codechef.com/problems/TFPAPER

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, k;
	    cin >> n >> k;
	    cout << n-k << endl;
	}
	return 0;
}