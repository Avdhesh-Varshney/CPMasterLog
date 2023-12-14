// Problem Link
// https://leetcode.com/problems/find-the-difference-of-two-arrays/

// Solution:
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans1, ans2;
        for(auto &i : nums1)
            if(find(nums2.begin(), nums2.end(), i) == nums2.end()) ans1.insert(i);
        for(auto &i : nums2)
            if(find(nums1.begin(), nums1.end(), i) == nums1.end()) ans2.insert(i);
        vector<int> s1, s2;
        for(auto &i : ans1) s1.emplace_back(i);
        for(auto &i : ans2) s2.emplace_back(i);
        return {s1, s2};
    }
};