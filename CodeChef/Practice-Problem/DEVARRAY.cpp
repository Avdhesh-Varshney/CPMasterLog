// Devu and An Array
// Problem Code - DEVARRAY

// https://www.codechef.com/problems/DEVARRAY

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int n, q;
    cin >> n >> q;
    int a[n], large = -1;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    for(int i = 0; i < q; i++) {
        int temp;
        cin >> temp;
        if(a[0] <= temp and temp <= a[n-1])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}