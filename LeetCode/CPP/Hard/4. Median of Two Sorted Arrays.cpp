// Problem Link:
// https://leetcode.com/problems/median-of-two-sorted-arrays/

// Solution:
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size() + nums2.size());
        copy(nums1.begin(), nums1.end(), ans.begin());
        copy(nums2.begin(), nums2.end(), ans.begin()+nums1.size());
        sort(ans.begin(), ans.end());
        int n = ans.size();
        if(n%2 == 0)
            return double(ans[n/2]+ans[(n/2)-1])/2;
        else
            return double(ans[n/2]);
    }
};