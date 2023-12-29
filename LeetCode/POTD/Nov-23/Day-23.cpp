// https://leetcode.com/problems/arithmetic-subarrays/description/?envType=daily-question&envId=2023-11-23

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size(), m = l.size();
        vector<bool> ans(m, false);
        for(int i = 0; i < m; i++) ans[i] = check(n, nums, l[i], r[i]);
        return ans;
    }
    bool check(int& n, const vector<int>& nums, int& l, int& r) {
        if(r-l <= 0) return true;
        vector<int> v(nums.begin()+l, nums.begin()+r+1);
        sort(v.begin(), v.end());
        for(int i = 1; i < r-l+1; i++) if(v[i]-v[i-1] != v[1]-v[0]) return false;
        return true;
    }
};