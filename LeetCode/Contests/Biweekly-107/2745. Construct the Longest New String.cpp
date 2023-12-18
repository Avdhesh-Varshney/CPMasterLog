// Problem Link - https://leetcode.com/contest/biweekly-contest-107/problems/construct-the-longest-new-string/

class Solution {
public:
    int longestString(int x, int y, int z) {
        int ans = 0;
        if(x == y) {
            ans += x + y + z;
        } else if(x > y) {
            ans += y;
            ans += (y+1);
            x -= (y+1);
            ans += z;
        } else {
            ans += x;
            ans += (x+1);
            y -= (x+1);
            ans += z;
        }
        return 2*ans;
    }
};