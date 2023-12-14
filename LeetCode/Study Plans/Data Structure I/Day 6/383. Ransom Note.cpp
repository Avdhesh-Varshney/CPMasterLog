// Problem Link:
// https://leetcode.com/problems/ransom-note/

// Solution:
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(auto ch : magazine)
            m[ch]++;
        for(auto ch : ransomNote) {
            if(!m[ch]--)
                return false;
        }
        return true;
    }
};