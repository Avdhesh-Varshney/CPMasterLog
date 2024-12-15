// Problem Link:
// https://leetcode.com/problems/maximum-average-pass-ratio/description

// Solution:
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        auto maxi = [](int p, int t) {
            return (p + 1) / (double)(t + 1) - p / (double)t;
        };
        priority_queue<pair<double, pair<int, int>>> pq;
        for(const auto& i : classes) pq.push({maxi(i[0], i[1]), {i[0], i[1]}});
        while(extraStudents--) {
            auto [l, i] = pq.top(); pq.pop();
            pq.push({maxi(i.first + 1, i.second + 1), {i.first + 1, i.second + 1}});
        }
        double ans = 0;
        while(!pq.empty()) {
            auto [_, i] = pq.top(); pq.pop();
            ans += i.first / (double)i.second;
        }
        return ans / classes.size();
    }
};