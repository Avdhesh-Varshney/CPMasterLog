// https://leetcode.com/problems/longest-palindrome/description/?envType=daily-question&envId=2024-06-04

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for(auto &i : s) m[i]++;
        int ans = 0;
        bool flag = true;
        for(auto &i : m) {
            if(i.second%2 != 0) {
                if(flag) {
                    flag = false;
                    ans += i.second;
                } else ans += (i.second - 1);
            } else ans += i.second;
        }
        return ans;
    }
};