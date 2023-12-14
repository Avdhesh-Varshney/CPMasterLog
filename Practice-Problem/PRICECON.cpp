// Chef and Price Control
// Problem Code - PRICECON

// https://www.codechef.com/problems/PRICECON

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
	    int p[n], s = 0, s1 = 0;
	    for(int j = 0; j < n; j++)
	        cin >> p[j];
	    for(int l = 0; l < n; l++) {
	        s += p[l];
	        if(p[l] > k)
	            p[l] = k;
	        s1 += p[l];
	    }
	    cout << s-s1 << endl;
	}
	return 0;
}