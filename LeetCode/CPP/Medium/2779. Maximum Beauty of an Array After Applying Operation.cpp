// Problem Link
// https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/

// Solution:
class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        if(nums.size() == 1) return 1;
        int ans = 0, sum = 0, len = *max_element(nums.begin(), nums.end());
        unordered_map<int, int> m;
        for(auto &i : nums) {
            m[max(i-k, 0)]++;
            m[min(i+k+1, len)]--;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto &i : m) pq.push(i.first);
        while(!pq.empty()) {
            sum += m[pq.top()];
            ans = max(ans, sum);
            pq.pop();
        }
        return ans;
    }
};