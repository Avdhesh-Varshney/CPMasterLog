// https://leetcode.com/problems/find-common-characters/description/?envType=daily-question&envId=2024-06-05

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> v(26, 0);
        for(auto &ch : words[0]) v[ch-'a']++;
        for(int i = 1; i < words.size(); i++) {
            unordered_map<char, int> m;
            for(auto &ch : words[i]) m[ch]++;
            solve(m, v);
        }
        vector<string> ans;
        for(int i = 0; i < 26; i++) {
            while(v[i]--) {
                char ch = 'a' + i;
                string str = "";
                str.push_back(ch);
                ans.emplace_back(str);
            }
        }
        return ans;
    }
    void solve(unordered_map<char, int>& m, vector<int>& v) {
        for(int i = 0; i < 26; i++) {
            if(v[i] > 0) {
                if(m[char('a'+i)] > 0) v[i] = min(v[i], m[char('a'+i)]);
                else v[i] = 0;
            }
        }
    }
};