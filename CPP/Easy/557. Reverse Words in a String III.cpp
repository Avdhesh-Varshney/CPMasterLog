// Problem Link
// https://leetcode.com/problems/reverse-words-in-a-string-iii/

// Solution:
class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string temp, t;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                str.push_back(temp);
                temp = "";
            }
            else
                temp.push_back(s[i]);
        }
        str.push_back(temp);
        for(auto i : str) {
            for(int j = i.length()-1; j >= 0; j--)
                t.push_back(i[j]);
            t.push_back(' ');
        }
        t.pop_back();
        return t;
    }
};