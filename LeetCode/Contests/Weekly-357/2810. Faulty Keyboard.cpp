// Problem Link - https://leetcode.com/contest/weekly-contest-357/problems/faulty-keyboard/

class Solution {
public:
    string finalString(string s) {
        string ans= "";
        for(auto &ch : s) {
            if(ch == 'i') {
                reverse(ans.begin(), ans.end());
            } else {
                ans += ch;
            }
        }
        return ans;
    }
};