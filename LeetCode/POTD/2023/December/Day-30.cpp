// https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/description/?envType=daily-question&envId=2023-12-30

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> m;
        int n = words.size();
        for(auto &word : words) for(auto &ch : word) m[ch]++;
        for(auto &i : m) if(i.second%n != 0) return false;
        return true;
    }
};