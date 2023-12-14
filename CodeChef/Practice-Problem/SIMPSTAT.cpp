// Simple Statistics
// Problem Code - SIMPSTAT

// https://www.codechef.com/problems/SIMPSTAT

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        double a[n], s = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        for(int i = k; i < n-k; i++)
            s += a[i];
        cout << fixed << setprecision(6);
        cout << (s)/float(n-2*k) << endl;
    }
	return 0;
}