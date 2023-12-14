// Problem Link
// https://leetcode.com/problems/sort-an-array/

// Solution:
class Solution {
public:
    void MergeSortedIntervals(vector<int>& v, int s, int m, int e) {
        vector<int> temp;
        int i, j;
        i = s;
        j = m + 1;
        while (i <= m && j <= e) {
            if (v[i] <= v[j]) {
                temp.push_back(v[i]);
                ++i;
            }
            else {
                temp.push_back(v[j]);
                ++j;
            }
        }
        while (i <= m) {
            temp.push_back(v[i]);
            ++i;
        }
        while (j <= e) {
            temp.push_back(v[j]);
            ++j;
        }
        for (int i = s; i <= e; ++i)
            v[i] = temp[i - s];
    }
    void MergeSort(vector<int>& v, int s, int e) {
        if (s < e) {
            int m = (s + e) / 2;
            MergeSort(v, s, m);
            MergeSort(v, m + 1, e);
            MergeSortedIntervals(v, s, m, e);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums;
        MergeSort(nums, 0, n-1);
        return nums;
    }
};