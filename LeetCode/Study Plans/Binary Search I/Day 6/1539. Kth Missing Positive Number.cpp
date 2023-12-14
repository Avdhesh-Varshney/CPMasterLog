// Question 2

// Problem Link
// https://leetcode.com/problems/kth-missing-positive-number/

// Solution:
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 1;
        while(k > 0) {
            if(find(arr.begin(), arr.end(), i) == arr.end()) k--;
            i++;
        }
        return --i;
    }
};