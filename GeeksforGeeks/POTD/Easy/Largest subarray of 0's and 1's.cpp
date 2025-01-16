// 16 Jan, 2025

class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int res = 0, n = arr.size(), sum = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            sum += (arr[i] == 1)? 1: -1;
            if(sum == 0) res = i+1;
            if(mp.find(sum) != mp.end()) res = max(res, i-mp[sum]);
            else mp[sum] = i;
        }
        return res;
    }
};