// Large Square
// Problem Code - XLSQUARE

// https://www.codechef.com/problems/XLSQUARE

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, a, temp = 1, count = 0;
        cin >> n >> a;
        int r = sqrt(n);
        cout << r*a << endl;
    }
    return 0;
}