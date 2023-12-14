// Problem Link - https://leetcode.com/contest/weekly-contest-348/problems/minimize-string-length/

class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> t;
        for(auto &ch : s) t.insert(ch);
        return t.size();
    }
};