// Problem Link: https://leetcode.com/problems/minimum-length-of-string-after-operations/

// Solution:
class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> mp;
        for(auto &ch: s) mp[ch]++;
        int ans = 0;
        for(auto &i : mp) {
            while(i.second > 2) i.second -= 2;
            ans += i.second;
        }
        return ans;
    }
};