// 12 Dec, 2024

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        unordered_map<int, int> m;
        for(auto &i : arr) m[i]++;
        if(m.find(target) != m.end()) return m[target];
        return 0;
    }
};