// Uncle Johny
// Problem Code - JOHNY

// https://www.codechef.com/problems/JOHNY

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        cin >> k;
        int num = a[k-1];
        sort(a, a+n);
        for(int i = 0; i < n; i++) {
            if(num == a[i])
                k = i;
        }
        cout << k+1 << endl;
    }
    return 0;
}