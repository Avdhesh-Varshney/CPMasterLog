// Chef gives Party
// Problem Code - PARTY2

// https://www.codechef.com/problems/PARTY2

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x, k;
	    cin >> n >> x >> k;
	    if(k >= (n*x))
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}