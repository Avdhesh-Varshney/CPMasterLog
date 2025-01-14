// 14 Jan, 2025

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total = accumulate(arr.begin(), arr.end(), 0), current = 0;
        total -= arr[0];
        for(int i = 1; i < arr.size(); i++) {
            current += arr[i-1];
            total -= arr[i];
            if(current == total) return i;
        }
        return -1;
    }
};