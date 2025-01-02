// 02 Jan, 2025

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        int n = arr.size(), ans = 0, sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            if(mp.find(sum-k) != mp.end()) ans += mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};