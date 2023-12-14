// Back to Campus
// Problem Code - MINDAYSRET

// https://www.codechef.com/problems/MINDAYSRET

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
	    if(n%k == 0)
	        cout << n/k << endl;
	    else
	        cout << (n/k) + 1 << endl;
	}
	return 0;
}