// Problem Link:
// https://leetcode.com/problems/split-a-string-in-balanced-strings/

// Solution:
class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, r = 0, l = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'L') l++;
            else r++;
            if(l == r) count++;
        } return count;
    }
};