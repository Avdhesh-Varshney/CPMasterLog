// 14 Dec, 2024

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        auto it = find(arr.begin(), arr.end(), key);
        return (it != arr.end())? find(arr.begin(), arr.end(), key) - arr.begin(): -1;
    }
};