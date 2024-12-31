// 31 Dec, 2024

class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        int len = 1, temp = 1, n = arr.size();
        for(int i = 0; i < n-1; i++) {
            if(arr[i+1] == arr[i]+1) ++temp;
            else if(arr[i] == arr[i+1]) continue;
            else {
                len = max(len, temp);
                temp = 1;
            }
        }
        return max(len, temp);
    }
};