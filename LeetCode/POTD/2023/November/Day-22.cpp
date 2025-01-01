// https://leetcode.com/problems/diagonal-traverse-ii/description/?envType=daily-question&envId=2023-11-22

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int, vector<int>> m;
        for(int row = nums.size()-1; row >= 0; row--)
            for(int col = 0; col < nums[row].size(); col++)
                m[col+row].emplace_back(nums[row][col]);
        for(auto &i : m) for(auto &j : i.second) ans.emplace_back(j);
        return ans;
    }
};