// https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/description/?envType=daily-question&envId=2023-11-19

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        sort(nums.begin(), nums.end());
        set<int> s(nums.begin(), nums.end());
        int ans = 0, sz = nums.size(), n = s.size() - 1;
        for(int i = sz-1; i >= 0; i--) {
            if(nums[0] == nums[i]) return ans;
            if(m[nums[i]] <= 0) m[nums[i]] = n--;
            ans += m[nums[i]];
        }
        return ans;
    }
};