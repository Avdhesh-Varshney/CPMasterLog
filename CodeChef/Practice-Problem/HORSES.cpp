// Racing Horses
// Problem Code - HORSES

// https://www.codechef.com/problems/HORSES

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long int s[n];
        long long int ans = LLONG_MAX;
        for(int i = 0; i < n; i++)
            cin >> s[i];
        sort(s, s+n);
        for(int i = 1; i < n; i++)
            ans = min(ans, abs(s[i]-s[i-1]));
        cout << ans << endl;
    }
    return 0;
}