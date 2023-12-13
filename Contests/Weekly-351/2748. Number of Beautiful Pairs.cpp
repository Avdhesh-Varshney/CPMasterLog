// Problem Link - https://leetcode.com/contest/weekly-contest-351/problems/number-of-beautiful-pairs/

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for(int i = 0; i < n; i++) {
            while(nums[i] >= 10) {
                nums[i] /= 10;
            }
            for(int j = i+1; j < n; j++) {
                if(__gcd(nums[i], nums[j]%10) == 1) ++ans;
            }
        }
        return ans;
    }
};