// 30 Dec, 2024

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> s(a.begin(), a.end());
        for(auto &i : b) s.insert(i);
        return s.size();
    }
};