// Problem Link
// https://leetcode.com/problems/count-asterisks/

// Solution:
class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0, flag = 1;
        for(int i = 0; i < s.length(); i++) {
            if(flag == 1 and s[i] == '*')
                ans++;
            else if(s[i] == '|' and flag == 1)
                flag = 0;
            else if(s[i] == '|' and flag == 0)
                flag = 1;
        }
        return ans;
    }
};