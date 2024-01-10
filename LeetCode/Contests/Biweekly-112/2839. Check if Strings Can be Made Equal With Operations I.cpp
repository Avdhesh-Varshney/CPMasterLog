// Problem Link - https://leetcode.com/contest/biweekly-contest-112/problems/check-if-strings-can-be-made-equal-with-operations-i/

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i = 0; i < 4; i++) {
            if(s1[i] == s2[i]) continue;
            for(int j = 2; j < 4; j++) {
                if(j-i == 2) {
                    if(s1[i] != s2[j] || s1[j] != s2[i]) return false;
                    else swap(s2[i], s2[j]);
                }
            }
        }
        if(s1 != s2) return false;
        return true;
    }
};