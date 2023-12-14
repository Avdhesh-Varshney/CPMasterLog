// Problem Link
// https://leetcode.com/problems/single-element-in-a-sorted-array/

// Solution:
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        vector<bool> travel(nums.size(), true);
        int ans;
        for(int i = 0; i < nums.size(); i++) {
            ans = nums[i];
            if(travel[i] and i+1 < nums.size()) {
                int j = i+1;
                while(nums[i] == nums[j]) {
                    travel[i] = travel[j] = false;
                    j++;
                }
                if(j == i+1)
                    break;
            }
        }
        return ans;
    }
};