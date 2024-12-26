// 26 Dec, 2024

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int, bool> mp;
        for(auto &i : arr) {
            if(mp[target-i]) return true;
            mp[i] = true;
        }
        return false;
    }
};