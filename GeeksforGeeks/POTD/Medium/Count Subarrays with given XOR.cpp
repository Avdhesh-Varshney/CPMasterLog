// 03 Jan, 2025

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> mp;
        mp[0] = 1;
        long count = 0;

        int prefix_xor = 0;
        for(auto it: arr) {
            prefix_xor = prefix_xor^it;
            if(mp.find(prefix_xor^k) != mp.end()) count += mp[prefix_xor^k];
            mp[prefix_xor]++;
        }
        return count;
    }
};