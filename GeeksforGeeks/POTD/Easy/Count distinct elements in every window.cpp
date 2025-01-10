// 10 Jan, 2025

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int n = arr.size();
        vector<int> res;
        unordered_map<int, int> mp;
        int i = 0;
        while(i < k) {
            ++mp[arr[i]];
            ++i;
        }
        res.emplace_back(mp.size());
        while(i < n) {
            if(mp.find(arr[i-k]) != mp.end()) {
                if(mp[arr[i-k]] > 1) --mp[arr[i-k]];
                else mp.erase(arr[i-k]);
            }
            ++mp[arr[i]];
            res.emplace_back(mp.size());
            ++i;
        }
        return res;
    }
};