// Sorted Substrings
// Problem Code - SSUBSTR

// https://www.codechef.com/problems/SSUBSTR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        string s;
        cin >> n >> s;
        for(int i = 1; i < n; i++)
            if(s[i-1] == '1' and s[i] == '0')
                ans++;
        cout << ans << endl;
    }
    return 0;
}