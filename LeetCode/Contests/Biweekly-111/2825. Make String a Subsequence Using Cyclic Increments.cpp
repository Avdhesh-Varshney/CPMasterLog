// Problem Link - https://leetcode.com/contest/biweekly-contest-111/problems/make-string-a-subsequence-using-cyclic-increments/

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0, n = str1.length(), m = str2.length();
        if(m > n) return false;
        for(int i = 0; i < n; i++) {
            if(str1[i] == 'z' && str2[j] == 'a') ++j;
            else if(str1[i] == str2[j]) ++j;
            else if(str1[i] + 1 == str2[j]) ++j;
            if(j == m) return true;
        }
        if(j != m) return false;
        return true;
    }
};