// Buying Sweets
// Problem Code - BUYING2

// https://www.codechef.com/problems/BUYING2

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int a[n], sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int ch = sum%x;
        sort(a, a+n);
        if(ch >= a[0])
            cout << "-1" << endl;
        else
            cout << sum/x << endl;
    }
    return 0;
}