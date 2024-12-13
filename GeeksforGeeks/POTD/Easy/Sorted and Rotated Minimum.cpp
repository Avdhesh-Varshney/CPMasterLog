// 13 Dec, 2024

class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        return *min_element(arr.begin(), arr.end());
    }
};