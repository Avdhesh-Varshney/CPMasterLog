// 05 Jan, 2025

// Solution:
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(), arr.end());
        int n = arr.size(), ans = 0;
        int i = 0, j = n-1;
        while(i <= j) {
            while(j > i && arr[i]+arr[j] >= target) --j;
            ans += (j-i);
            ++i;
        }
        return ans;
    }
};