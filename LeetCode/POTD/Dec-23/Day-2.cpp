// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/?envType=daily-question&envId=2023-12-02

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        unordered_map<char, int> c;
        for(auto &ch : chars) c[ch]++;
        for(auto &word : words) if(check(word, c)) ans += word.length();
        return ans;
    }
    bool check(const string& word, unordered_map<char, int>& c) {
        unordered_map<char, int> w;
        for(auto &ch : word) w[ch]++;
        for(auto &i : w) {
            if(c[i.first] > 0) {
                if(c[i.first] < i.second) return false;
            } else return false;
        }
        return true;
    }
};