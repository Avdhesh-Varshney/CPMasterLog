// 11 December 2024

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size(), m = b.size();
        a.insert(a.end(), b.begin(), b.end());
        sort(a.begin(), a.end());
        b = {};
        b.insert(b.end(), a.end()-m, a.end());
        a.erase(a.begin()+n, a.end());
    }
};