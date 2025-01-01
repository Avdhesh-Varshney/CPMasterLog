// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/?envType=daily-question&envId=2023-12-12

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int x = pq.top()-1;
        pq.pop();
        return x * 1ll * (pq.top()-1);
    }
};