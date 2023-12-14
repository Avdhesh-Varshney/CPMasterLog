// Problem Link
// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

// Solution:
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;
        for(auto i : word1) {
            for(int j = 0; j < i.length(); j++)
                s1.push_back(i[j]);
        }
        for(auto i : word2) {
            for(int j = 0; j < i.length(); j++)
                s2.push_back(i[j]);
        }
        return (s1.compare(s2) == 0) ? true : false;
    }
};