// ATM Machine
// Problem Code - ATM2

// https://www.codechef.com/problems/ATM2

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n, k;
	    cin >> n >> k;
	    int a[n], s[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    for(int i = 0; i < n; i++) {
	        if(k >= a[i]) {
	            s[i] = 1;
	            k -= a[i];
	        }
	        else {
	            s[i] = 0;
	        }
	    }
	    for(int j = 0; j < n; j++)
	        cout << s[j];
	    cout << endl;
	}
	return 0;
}