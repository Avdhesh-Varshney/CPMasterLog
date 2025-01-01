// https://leetcode.com/problems/largest-substring-between-two-equal-characters/description/?envType=daily-question&envId=2023-12-31

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, vector<int>> m;
        int n = s.length();
        for(int i = 0; i < n; i++) {
            if(m[s[i]].size() == 2) m[s[i]][1] = i;
            else if(m[s[i]].size() <= 1) m[s[i]].emplace_back(i);
        }
        int ans = -1;
        for(auto &i : m) if(i.second.size() == 2) ans = max(ans, abs(i.second[0] - i.second[1]) - 1);
        return ans;
    }
};