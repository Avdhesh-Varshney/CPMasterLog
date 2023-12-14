// Maximum Weight Difference
// Problem Code - MAXDIFF

// https://www.codechef.com/problems/MAXDIFF

// Solution:
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int ash = 0, tay = 0, ans = 0;
        sort(a, a+n);
        int tem = min(k, n-k);
        for(int i = 0; i < tem; i++)
            ash += a[i];
        for(int i = tem; i < n; i++)
            tay += a[i];
        ans = abs(ash-tay);
        cout << ans << endl;
    }
    return 0;
}