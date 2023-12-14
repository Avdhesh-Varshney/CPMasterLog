// Compress The Video
// Problem Code - COMPRESSVD

// https://www.codechef.com/problems/COMPRESSVD

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, count = 0;
	    cin >> n;
	    int a[n];
	    for(int j = 0; j < n; j++)
	        cin >> a[j];
	    if(n > 1) {
	        for(int k = 0; k < n-1; k++) {
	            if(a[k] == a[k+1])
	                count++;
	        }
	        cout << n - count << endl;
	    }
	    else
	        cout << n << endl;
	}
	return 0;
}