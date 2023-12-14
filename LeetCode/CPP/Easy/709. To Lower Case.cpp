// Problem Link
// https://leetcode.com/problems/to-lower-case/

// Solution:
class Solution {
public:
    string toLowerCase(string s) {
        string str;
        for(int i = 0; i < s.length(); i++) {
            if(!islower(s[i])) {
                char ch = tolower(s[i]);
                str.push_back(ch);
            }
            else
                str.push_back(s[i]);
        }
        return str;
    }
};