// 29 Dec, 2024

class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int, bool> mp;
        for(auto &i : a) mp[i] = true;
        vector<int> ans;
        for(auto &i : b) {
            if(mp[i]) {
                ans.emplace_back(i);
                mp[i] = false;
            }
        }
        return ans;
    }
};