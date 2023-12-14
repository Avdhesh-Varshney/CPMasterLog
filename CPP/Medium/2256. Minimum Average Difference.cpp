// Problem Link
// https://leetcode.com/problems/minimum-average-difference/

// Solution:
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long n = nums.size();
        vector<long long> pre;
        long long unsigned sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            pre.push_back(sum);
        }
        long long Min = INT_MAX;
        long long result;
        for(int i = 0; i < n; i++) {
            long long a, b;
            if(i+1 != n) {
                a = (pre[i])/(i+1);
                b = (sum-pre[i])/(n-(i+1));
            }
            else {
                a = pre[i]/n;
                b = 0;
            }
            if(Min > abs(a-b)) {
                Min = abs(a-b);
                result = i;
            }
        }
        return result;
    }
};