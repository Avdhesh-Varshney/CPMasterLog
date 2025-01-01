// 01 Jan, 2025

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(auto &str : arr) {
            string temp = str;
            sort(str.begin(), str.end());
            mp[str].emplace_back(temp);
        }
        for(auto &i : mp) ans.emplace_back(i.second);
        return ans;
    }
};