// Problem Link: https://leetcode.com/problems/string-matching-in-an-array/

// Solution:
class Solution {
    bool check(int& l1, string& subStr, int& l2, string& str) {
        for(int i = 0; i <= l2-l1; i++) if(str.substr(i, l1) == subStr) return true;
        return false;
    }
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> ans;
        for(int i = 0; i < n; i++) {
            int l1 = words[i].length();
            for(int j = 0; j < n; j++) {
                int l2 = words[j].length();
                if(l2 > l1 && check(l1, words[i], l2, words[j])) {
                    ans.emplace_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};