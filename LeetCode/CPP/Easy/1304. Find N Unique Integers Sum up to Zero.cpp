// Problem Link:
// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

// Solution:
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        int num = 1, i = 0;
        for(i = 0; i < n/2; i++) {
            ans[i] = num;
            ans[n/2+i] = (-1)*num;
            num++;
        }
        if(n%2 == 1)
            ans[n-1] = 0;
        return ans;
    }
};