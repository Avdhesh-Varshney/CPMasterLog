// Problem Link
// https://leetcode.com/problems/single-number-ii/

// Solution:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto &i : nums) m[i]++;
        for(auto &i : m) {
            if(i.second != 3) return i.first;
        }
        return -1;
    }
};