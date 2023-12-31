// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/?envType=daily-question&envId=2023-12-01

class Solution {
    string s1, s2;
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        s1 = "", s2 = "";
        for(auto &str : word1) s1 += str;
        for(auto &str : word2) s2 += str;
        return !s1.compare(s2);
    }
};