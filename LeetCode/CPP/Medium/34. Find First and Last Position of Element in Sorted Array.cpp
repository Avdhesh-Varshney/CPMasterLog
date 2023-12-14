// Problem Link
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// Solution:

// Way :- 1
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return {-1, -1};
        vector<int> ans;
        int flag = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target and flag == 1) {
                ans.push_back(i);
                flag = 0;
            }
            else if(flag == 0 and i+1 == nums.size() and nums[i] == target)
                ans.push_back(i);
            else if(flag == 0 and nums[i] > target) {
                ans.push_back(i-1);
                break;
            }
        }
        if(ans.size() == 1)
            ans.push_back(ans[0]);
        else if(ans.size() == 0)
            return {-1, -1};
        return ans;
    }
};

// Way :- 2
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = find(nums.begin(), nums.end(), target) - nums.begin();
        if(st != nums.size()) {
            int lt = st;
            for(; lt < nums.size(); lt++) if(nums[lt] != target) break;
            return {st, lt-1};
        }
        return {-1, -1};
    }
};