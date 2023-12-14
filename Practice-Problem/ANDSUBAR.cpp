// Longest AND Subarray
// Problem Code - ANDSUBAR

// https://www.codechef.com/problems/ANDSUBAR

// Solution:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll bits = floor(log2(n)) + 1;
        ll ans = max(n - pow(2, bits-1) +1, pow(2, bits-2));
        cout << ans << endl;
    }
    return 0;
}