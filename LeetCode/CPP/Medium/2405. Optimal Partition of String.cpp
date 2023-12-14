// Problem Link
// https://leetcode.com/problems/optimal-partition-of-string/

// Solution:
class Solution {
public:
    bool check(string s) {
        if(s.length() == 1) return true;
        unordered_map<char, int> m;
        for(int i = 0; i < s.length(); i++)
            m[s[i]]++;
        for(auto &it : m)
            if(it.second > 1)
                return false;
        return true;
    }
    int partitionString(string s) {
        if(s.length() == 1) return 1;
        int ans = 0, n = s.length();
        string t;
        for(int i = 0; i < n; i++) {
            t.push_back(s[i]);
            if(!check(t)) {
                ans++;
                t = "";
                t.push_back(s[i]);
            }
        }
        if(check(t)) ans++;
        return ans;
    }
};