// Problem Link - https://leetcode.com/contest/weekly-contest-334/problems/left-and-right-sum-differences/

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> left, right;
//         for left
        left.push_back(0);
        int sum = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            left.push_back(sum);
            sum += nums[i];
        }
//        for right
        sum = nums[nums.size()-1];
        right.push_back(0);
        for(int i = nums.size()-1; i > 0; i--) {
            right.push_back(sum);
            sum += nums[i-1];
        }
        reverse(right.begin(), right.end());
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
    }
};