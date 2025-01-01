// https://leetcode.com/problems/height-checker/description/?envType=daily-question&envId=2024-06-10

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr = heights;
        sort(heights.begin(), heights.end());
        int ans = 0;
        for(int i = heights.size()-1; i >= 0; i--) if(arr[i] != heights[i]) ++ans;
        return ans;
    }
};