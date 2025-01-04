// Problem Link: https://leetcode.com/problems/unique-length-3-palindromic-subsequences

// Solution:
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0, n = s.length();
        unordered_map<char, vector<int>> mp;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(mp.find(s[i]) == mp.end()) mp[s[i]] = {i, -1};
            else mp[s[i]][1] = i;
        }
        for(int i = 0; i < n; i++) {
            if(mp[s[i]][1] != -1) {
                set<int> st(s.begin()+i+1, s.begin()+mp[s[i]][1]);
                ans += st.size();
                mp[s[i]][1] = -1;
            }
        }
        return ans;
    }
};