// Buying New Tablet
// Problem Code - TABLET

// https://www.codechef.com/problems/TABLET

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t, n, b;
	cin >> t;
	while(t--) {
	    cin >> n >> b;
	    int w[n], h[n], p[n], large = -1;
	    for(int i = 0; i < n; i++)
	        cin >> w[i] >> h[i] >> p[i];
	    for(int i = 0; i < n; i++) {
	        if(b >= p[i]) {
	            if(large < (h[i]*w[i]))
	                large = h[i]*w[i];
	        }
	    }
	    if(large == -1)
	        cout << "no tablet" << endl;
	    else
	        cout << large << endl;
	}
	return 0;
}