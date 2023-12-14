// Problem Link
// https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-83/problems/#

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string solve(int n, string s) {
        // code here
        if(n == 1)
            return s;
        string result = "";
        int hash[26] = {0};
        for(int i = 0; i < n; i++)
            hash[s[i] - 97]++;
        int max_freq = INT_MIN;
        int index = 0;
        for(int i = 0; i < 26; i++) {
            if(hash[i] > max_freq) {
                max_freq = hash[i];
                index = i;
            }
        }
        result += (index + 97);
        return result;
    }
};

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        string s;
        cin >> n >> s;
        Solution ob;
        cout << ob.solve(n, s) << endl;
    }
    return 0;
}