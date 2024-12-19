// Problem Link:
// https://leetcode.com/problems/max-chunks-to-make-sorted/description

// Solution:
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int large = INT_MIN, ans = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > large) large = arr[i];
            if(large == i) ++ans;
        }
        return ans;
    }
};