// Problem Link: https://leetcode.com/problems/counting-words-with-a-given-prefix/

// Solution:
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int l = pref.length(), ans = 0;
        for(auto &word: words) if(word.substr(0, l) == pref) ++ans;
        return ans;
    }
};