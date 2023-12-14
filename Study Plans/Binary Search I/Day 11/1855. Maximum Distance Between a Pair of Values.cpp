// Question 1

// Problem Link
// https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/

// Solution:
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0, k = min(nums1.size(), nums2.size());
        for(int i = 0; i < k; i++) {
            int l = i, r = nums2.size()-1, m;
            while(l <= r) {
                m = l + (r-l)/2;
                int t = nums1[i];
                if(nums2[m] >= t) {
                    l = m+1;
                    if(m-i > ans) ans = m-i;
                }
                else r = m-1;
            }
        }
        return ans;
    }
};