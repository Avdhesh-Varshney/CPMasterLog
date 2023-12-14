// Problem Link
// https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/

// Solution:
class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> str;
        for(int i = s[0]; i <= s[3]; i++) {
            for(int j = s[1]; j <= s[4]; j++) {
                string t;
                t.push_back(i);
                t.push_back(j);
                str.push_back(t);
            }
        }
        return str;
    }
};