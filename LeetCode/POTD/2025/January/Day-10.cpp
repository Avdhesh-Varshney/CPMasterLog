// Problem Link: https://leetcode.com/problems/word-subsets/

// Solution:
class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;

        int len = 0;
        unordered_map<char, int> m2;
        for(auto &str: words2) {
            unordered_map<char, int> mp;
            int x = 0;
            for(auto &ch: str) {
                mp[ch]++; x++;
                m2[ch] = max(m2[ch], mp[ch]);
            }
            len = max(len, x);
        }

        for(auto &uni: words1) {
            if(uni.length() < len) continue;
            unordered_map<char, int> m1;
            for(auto &ch: uni) m1[ch]++;

            bool found = true;
            for(auto &i: m2) {
                if(m1.find(i.first) != m1.end()) {
                    if(m1[i.first] < i.second) {
                        found = false;
                        break;
                    }
                } else {
                    found = false;
                    break;
                }
            }
            if(found) res.emplace_back(uni);
        }
        return res;
    }
};