// Degree of Polynomial
// Problem Code - DPOLY

// https://www.codechef.com/problems/DPOLY

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
	    int a[n], count = n-1;
	    for(int k = 0; k < n; k++)
	        cin >> a[k];
	    for(int k = 1; k <= n; k++) {
    	    if(a[n-k] != 0)
    	        break;
    	    count--;
	    }
	    cout << count << endl;
	}
	return 0;
}