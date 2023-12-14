// Processing a String
// Problem Code - KOL15A

// https://www.codechef.com/problems/KOL15A

// Solution:
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        int sum = 0;
        cin >> s;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0')
                continue;
            if(isdigit(s[i])) {
                for(int j = 1; j <= 9; j++) {
                    if(s[i] == 48+j)
                        sum += j;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}