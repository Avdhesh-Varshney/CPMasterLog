// 09 Jan, 2025

class Solution {
    void solve(int& n, vector<int>& a, int& t, int& left, int& right, int& sum) {
        if(left >= n || right >= n) return;
        sum += a[right++];
        if(sum == t) return;
        else if(sum > t) {
            sum = 0;
            right = ++left;
        }
        solve(n, a, t, left, right, sum);
    }
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size(), left = 0, right = 0, sum = 0;
        solve(n, arr, target, left, right, sum);
        if(accumulate(arr.begin()+left, arr.begin()+right, 0) == target)
            return {left+1, right};
        return {-1};
    }
};