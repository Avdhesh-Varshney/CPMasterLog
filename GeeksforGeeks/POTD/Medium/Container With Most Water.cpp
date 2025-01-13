// 13 Jan, 2025

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size(), ans = 0;
        int left = 0, right = n-1;
        while(left <= right) {
            ans = max(ans, min(arr[left], arr[right]) * (right-left));
            if(arr[left] < arr[right]) ++left;
            else --right;
        }
        return ans;
    }
};