// Problem Link:
// https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description

// Solution:
class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < nums.size(); i++) pq.push(make_pair(nums[i], i));
        long long ans = 0;
        unordered_map<int, bool> m;
        while(!pq.empty()) {
            if(m.find(pq.top().second) == m.end()) {
                m[pq.top().second] = true;
                m[pq.top().second-1] = true;
                m[pq.top().second+1] = true;
                ans += pq.top().first;
            }
            pq.pop();
        }
        return ans;
    }
};