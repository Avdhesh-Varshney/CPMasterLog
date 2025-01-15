// 15 Jan, 2025

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int ans = 0, n = arr.size(), sum = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            if(sum == k) ans = max(ans, i+1);
            if(mp.find(sum-k) != mp.end()) ans = max(ans, i-mp[sum-k]);
            if(mp.find(sum) == mp.end()) mp[sum] = i;
        }
        return ans;
    }
};