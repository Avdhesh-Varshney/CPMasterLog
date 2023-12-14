// Problem Link
// https://leetcode.com/problems/richest-customer-wealth/

// Solution:
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int large = 0;
        for(int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for(int  j = 0; j < accounts[i].size(); j++)
                sum += accounts[i][j];
            if(sum > large)
                large = sum;
        }
        return large;
    }
};