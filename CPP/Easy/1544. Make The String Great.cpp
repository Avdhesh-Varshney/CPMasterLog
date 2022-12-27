// Problem Link
// https://leetcode.com/problems/make-the-string-great/

// Solution:
class Solution {
public:
    string makeGood(string s) {
        vector<char> str;
        for(auto ch : s) {
            if(!str.empty() && abs(str.back() - ch) == 32)
                str.pop_back();
            else
                str.push_back(ch);
        }
        string ans(str.begin(), str.end());
        return ans;
    }
};