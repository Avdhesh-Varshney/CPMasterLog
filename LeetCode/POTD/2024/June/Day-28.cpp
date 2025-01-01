// https://leetcode.com/problems/maximum-total-importance-of-roads/description/?envType=daily-question&envId=2024-06-28

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int, int> m;
        for(auto &i : roads) for(auto &j: i) m[j]++;
        vector<pair<int, int>> freq;
        for(auto &i : m) freq.push_back({i.second, i.first});
        sort(freq.begin(), freq.end(), greater<pair<int, int>>());
        vector<int> imp(n);
        for(auto &i: freq) imp[i.second] = n--;

        long long ans = 0;
        for(auto &road: roads) {
            ans += imp[road[0]];
            ans += imp[road[1]];
        }
        return ans;
    }
};