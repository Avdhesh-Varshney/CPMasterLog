// Sort the String
// Problem Code - SRTARR

// https://www.codechef.com/problems/SRTARR

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, count = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1' and s[i+1] == '0')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}