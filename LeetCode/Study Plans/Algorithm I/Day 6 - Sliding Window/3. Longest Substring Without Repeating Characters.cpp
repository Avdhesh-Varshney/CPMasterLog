// Question 1

// Problem Link
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

// Solution:

// Way :- 1
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> t;
        int ans = 0, l = 0, r = 0;
        while(r < s.size()) {
            while(t.find(s[r]) != t.end()) {
                t.erase(s[l]);
                l++;
            }
            t.insert(s[r]);
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};

// Way :- 2
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), res = 0, i = 0;
        vector<int> lastIndex(256, -1);
        for (int j = 0; j < n; j++) {
            i = max(i, lastIndex[s[j]] + 1);
            res = max(res, j - i + 1);
            lastIndex[s[j]] = j;
        }
        return res;
    }
};