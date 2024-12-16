// Problem Link
// https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description

// Solution:
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < nums.size(); i++) pq.push(make_pair(nums[i], i));
        while(k--) {
            auto pair = pq.top(); pq.pop();
            pq.push(make_pair(pair.first*multiplier, pair.second));
        }
        while(!pq.empty()) {
            nums[pq.top().second] = pq.top().first;
            pq.pop();
        }
        return nums;
    }
};