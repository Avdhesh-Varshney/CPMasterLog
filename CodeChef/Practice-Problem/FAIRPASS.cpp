// Passes for Fair
// Problem Code - FAIRPASS

// https://www.codechef.com/problems/FAIRPASS

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
	    if(n < k)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}