// https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/?envType=daily-question&envId=2023-11-14

class Solution {
public:
    int unique(int& n, string& s, char& ch, int& i, int& id) {
        set<char> st;
        for(int j = i+1; j < id; j++) st.insert(s[j]);
        return st.size();
    }
    int countPalindromicSubsequence(string s) {
        int n = s.length(), ans = 0;
        unordered_map<char, int> m;
        for(int i = n-1; i >= 0; i--) if(m[s[i]] <= 0) m[s[i]] = i;
        vector<bool> travel(26, true);
        for(int i = 0; i < n; i++) {
            if(travel[s[i] - 'a'] && m[s[i]] != i) {
                ans += unique(n, s, s[i], i, m[s[i]]);
                travel[s[i] - 'a'] = false;
            }
        }
        return ans;
    }
};