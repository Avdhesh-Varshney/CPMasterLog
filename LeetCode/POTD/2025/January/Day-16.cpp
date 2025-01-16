// Problem Link: https://leetcode.com/problems/bitwise-xor-of-all-pairings/

// Solution:
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1, m2;
        for(auto &i : nums1) m1[i]++;
        nums1 = {};
        for(auto &i : m1) if(i.second%2 == 1) nums1.emplace_back(i.first);

        for(auto &i : nums2) m2[i]++;
        nums2 = {};
        for(auto &i : m2) if(i.second%2 == 1) nums2.emplace_back(i.first);

        int res = 0;
        for(auto &i : nums1) for(auto &j : nums2) res ^= (i^j);
        return res;
    }
};