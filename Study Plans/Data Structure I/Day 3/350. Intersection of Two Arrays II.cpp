// Problem Link
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

// Solution:
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m1, m2;
        for(int i = 0; i < nums1.size(); i++)
            m1[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++)
            m2[nums2[i]]++;
        vector<int> ans;
        for(auto &i : m1)
            for(auto &j : m2)
                if(i.first == j.first)
                    for(int k = 0; k < min(i.second, j.second); k++)
                        ans.emplace_back(i.first);
        return ans;
    }
};