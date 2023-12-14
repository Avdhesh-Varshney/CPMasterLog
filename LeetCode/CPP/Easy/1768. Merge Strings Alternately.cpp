// Problem Link
// https://leetcode.com/problems/merge-strings-alternately/

// Solution:
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i = 0, j = 0;
        bool flag = true;
        while(i < word1.size() && j < word2.size()) {
            if(flag) {
                ans.push_back(word1[i]);
                i++;
                flag = false;
            }
            else {
                ans.push_back(word2[j]);
                j++;
                flag = true;
            }
        }
        if(i < word1.size()) ans += word1.substr(i, word1.size()-i);
        else if(j < word2.size()) ans += word2.substr(j, word2.size()-j);
        return ans;
    }
};