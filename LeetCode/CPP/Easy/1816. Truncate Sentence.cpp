// Problem Link
// https://leetcode.com/problems/truncate-sentence/

// Solution:
class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> v;
        string str, ans;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                v.push_back(str);
                str = "";
            }
            else
                str.push_back(s[i]);
        }
        v.push_back(str);
        for(int i = 0; i < k and i < v.size(); i++) {
            for(int j = 0; j < v[i].length(); j++)
                ans.push_back(v[i][j]);
            ans.push_back(' ');
        }
        ans.pop_back();
        return ans;
    }
};