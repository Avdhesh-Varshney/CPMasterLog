// Single Operation Part 1
// Problem Code - SINGLEOP1

// https://www.codechef.com/problems/SINGLEOP1

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1')
                ans++;
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}