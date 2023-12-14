// 11 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int n = s.size();
        for(int i = 0; i < n/2; i++) {
            char left = s[i], right = s[n-1-i];
            if(left == '?' && right == '?') {
                continue;
            } else if(left == '?' || right == '?') {
                if(left == '?') s[i] = right;
                else s[n-1-i] = left;
            } else if(left == right) {
                continue;
            } else {
                return -1;
            }
        }
        int res = 0;
        char prev = '-';
        for(int i = 0; i < n; i++) {
            char curr = s[i];
            if(curr == '?') continue;
            if(prev != '-') res += abs(prev - curr);
            prev = curr;
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minimumSum(s) << endl;
    }
    return 0;
}