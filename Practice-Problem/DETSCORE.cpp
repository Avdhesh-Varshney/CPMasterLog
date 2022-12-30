// Determine the Score
// Problem Code - DETSCORE

// https://www.codechef.com/problems/DETSCORE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, n;
	    cin >> x >> n;
	    cout << (x*n)/10 << endl;
	}
	return 0;
}