// https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/description/?envType=daily-question&envId=2023-11-08

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(fx == sx && fy == sy) {
            if(t != 1) return true;
            return false;
        }
        int x = abs(fx-sx), y = abs(fy-sy);
        return t >= min(x, y) + (max(x, y) - min(x, y));
    }
};