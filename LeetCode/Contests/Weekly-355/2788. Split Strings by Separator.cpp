// Problem Link - https://leetcode.com/contest/weekly-contest-355/problems/split-strings-by-separator/

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(auto &s : words) {
            string temp = "";
            for(auto &ch : s) {
                if(ch == separator) {
                    if(temp != "")
                        ans.emplace_back(temp);
                    temp = "";
                } else temp += ch;
            }
            if(temp != "") ans.emplace_back(temp);
        }
        return ans;
    }
};