// 07 Jan, 2025

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int ans = 0, n = arr.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            if(mp.find(target-arr[i]) != mp.end()) ans += mp[target-arr[i]];
            mp[arr[i]]++;
        }
        return ans;
    }
};