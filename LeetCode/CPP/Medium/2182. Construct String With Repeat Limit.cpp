// Problem Link:
// https://leetcode.com/problems/construct-string-with-repeat-limit/description

// Solution:
class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> m;
        for(auto &i : s) m[i]++;
        priority_queue<pair<char, int>> pq;
        for(auto &i : m) pq.push(make_pair(i.first, i.second));
        string ans = "";
        while(!pq.empty()) {
            auto pair = pq.top(); pq.pop();
            if(ans.length() > 0 and ans[ans.length()-1] == pair.first) continue;
            int i = 0;
            while(i < repeatLimit && i < pair.second) {
                ans += pair.first;
                ++i;
            }
            if(i < pair.second) {
                if(!pq.empty()) {
                    auto temp = pq.top(); pq.pop();
                    ans += temp.first;
                    if(temp.second-1 > 0)
                        pq.push(make_pair(temp.first, temp.second-1));
                }
                if(pair.second-repeatLimit > 0)
                    pq.push(make_pair(pair.first, pair.second-repeatLimit));
            }
        }
        return ans;
    }
};