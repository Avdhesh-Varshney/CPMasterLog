// Farmer And His Plot
// Problem Code - RECTSQ

// https://www.codechef.com/problems/RECTSQ

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t, n, m, i, j;
	cin >> t;
	while(t--) {
	    int large = 0;
	    cin >> n >> m;
	   int k = __gcd(n, m);
	   cout << (n/k) * (m/k) << endl;
	}
	return 0;
}