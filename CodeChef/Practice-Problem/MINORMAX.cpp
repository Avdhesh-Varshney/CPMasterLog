// Minimum or Maximum
// Problem Code - MINORMAX

// https://www.codechef.com/problems/MINORMAX

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, c = 0;
        cin >> n;
        int a[n];
        int mn = INT_MAX, mx = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
            if(a[i] != mn && a[i] != mx)
                c++;
        }
        if(!c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}