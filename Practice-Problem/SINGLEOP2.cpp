// Single Operation Part 2
// Problem Code - SINGLEOP2

// https://www.codechef.com/problems/SINGLEOP2

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 1;
        string s;
        cin >> n >> s;
        s += '1';
        n++;
        for(int i = 1; i < n; i++) {
            if(s[i] == '1')
                break;
            else
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}