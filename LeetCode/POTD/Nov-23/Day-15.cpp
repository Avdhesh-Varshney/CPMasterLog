// https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/description/?envType=daily-question&envId=2023-11-15

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        if(arr[0] != 1) return n;
        for(int i = 1; i < n; i++) if(arr[i]-arr[i-1] > 1) arr[i] = arr[i-1] + 1;
        return arr[n-1];
    }
};