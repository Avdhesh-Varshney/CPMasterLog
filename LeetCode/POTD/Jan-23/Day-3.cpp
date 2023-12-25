// https://leetcode.com/problems/delete-columns-to-make-sorted/description/?envType=daily-question&envId=2023-01-03

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0, n = strs.size(), l = strs[0].length();
        for(int j = 0; j < l; j++) {
            for(int i = 1; i < n; i++) {
                if(strs[i-1][j] > strs[i][j]) {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};