// Problem Link
// https://leetcode.com/problems/word-pattern/description/

// Solution:
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> words;
        string word = "";
        for(char c : str) {
            if(c == ' ') {
                words.push_back(word);
                word = "";
            }
            else
                word += c;
        }
        words.push_back(word);
        if(pattern.length() != words.size())
            return false;
        unordered_map<char, string> m;
        for(int i = 0; i < pattern.size(); i++) {
            if(m.find(pattern[i]) == m.end())
                m[pattern[i]] = words[i];
            else if(m[pattern[i]] != words[i])
                return false;
        }
        unordered_set<string> set;
        for(auto it : m)
            set.insert(it.second);
        if(m.size() != set.size())
            return false;
        return true;
    }
};