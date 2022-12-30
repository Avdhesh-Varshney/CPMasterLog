// Problem Link:
// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/

// Solution:
class Solution {
public:
    int minPartitions(string n) {
        int ans = n[0] - '0';
        for(char ch : n) {
            int temp = ch - 48;
            ans = max(ans, temp);
        }
        return ans;
    }
};