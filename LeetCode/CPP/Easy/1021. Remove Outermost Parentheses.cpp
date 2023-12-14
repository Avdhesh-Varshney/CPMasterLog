// Problem Link
// https://leetcode.com/problems/remove-outermost-parentheses/

// Solution:
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int open = 0, close = 0, start = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(')
                open++;
            else
                close++;
            if(open == close) {
                int end = i;
                for(int j = start+1; j < end; j++)
                    ans.push_back(s[j]);
                start = end+1;
            }
        }
        return ans;
    }
};