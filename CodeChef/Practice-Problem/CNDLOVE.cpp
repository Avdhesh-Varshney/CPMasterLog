// Candy Love
// Problem Code - CNDLOVE

// https://www.codechef.com/problems/CNDLOVE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    int sum = 0;
	    for(int i = 0; i < n; i++) {
	        sum += a[i];
	    }
	    if(sum%2 == 0)
	        cout << "NO" << endl;
	    else
	        cout << "YES" << endl;
	}
	return 0;
}