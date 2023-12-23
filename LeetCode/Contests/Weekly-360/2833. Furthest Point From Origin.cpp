// Problem Link - https://leetcode.com/contest/weekly-contest-360/problems/furthest-point-from-origin/

class Solution {
public:
    int calc(string& moves, int move) {
        int ans = 0;
        for(auto &ch : moves) {
            if(ch == 'L') --ans;
            else if(ch == 'R') ++ans;
            else if(ch == '_') ans += move;
        }
        return ans;
    }
    int furthestDistanceFromOrigin(string moves) {
        int ans = calc(moves, -1), ans1 = calc(moves, 1);
        ans = max(abs(ans), abs(ans1));
        return ans;
    }
};