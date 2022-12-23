// Good Quality Bulbs
// Problem Code - BULBLIFE

// https://www.codechef.com/problems/BULBLIFE

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int n, x, s = 0, y = 0;
	    cin >> n >> x;
	    int a[n-1];
	    for(int j = 0; j < n-1; j++) {
	        cin >> a[j];
	        s += a[j];
	    }
	    while((s+y)/n < x)
	        y++;
	    cout << y << endl;
	}
	return 0;
}