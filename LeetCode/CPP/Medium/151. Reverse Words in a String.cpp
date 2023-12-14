// Problem Link
// https://leetcode.com/problems/reverse-words-in-a-string/

// Solution:
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string temp, ans;
        s.push_back(' ');
        int flag = (s[0] == ' ')? 0 : 1;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ' and flag == 1) {
                v.push_back(temp);
                temp = "";
                flag = 0;
            }
            else if(s[i] != ' ') {
                temp.push_back(s[i]);
                flag = 1;
            }
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++) {
            for(int j = 0; j < v[i].size(); j++)
                ans.push_back(v[i][j]);
            ans.push_back(' ');
        }
        ans.pop_back();
        return ans;
    }
};