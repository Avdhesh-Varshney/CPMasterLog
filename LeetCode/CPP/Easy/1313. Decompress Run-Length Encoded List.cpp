// Problem Link
// https://leetcode.com/problems/decompress-run-length-encoded-list/

// Solution:
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            int freq = nums[i], val = nums[i+1];
            while(freq--)
                ans.push_back(val);
            i++;
        }
        return ans;
    }
};