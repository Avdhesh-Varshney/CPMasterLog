// Problem Link
// https://leetcode.com/problems/valid-parentheses/

// Solution:
class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 1)
            return false;
        string str="";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' or s[i] == '{' or s[i] == '[')
                str.push_back(s[i]);
            else if(str.length() == 0)
                return false;
            else if(s[i] == ']' and str[str.length()-1] != '[')
                return false;
            else if(s[i] == '}' and str[str.length()-1] != '{')
                return false;
            else if(s[i] == ')' and str[str.length()-1] != '(')
                return false;
            else if(str.length() > 0)
                str.pop_back();
        }
        if(str.length() == 0)
            return true;
        return false;
    }
};