// Problem Link
// https://leetcode.com/problems/number-of-zero-filled-subarrays/

// Solution:
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0, count = 0;
        for(auto &num : nums) {
            if(num != 0 && count != 0) {
                ans += (count*(count+1))/2;
                count = 0;
            }
            if(num == 0)
                count++;
        }
        ans += (count*(count+1))/2;
        return ans;
    }
};