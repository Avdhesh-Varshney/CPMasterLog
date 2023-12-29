// https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/description/?envType=daily-question&envId=2023-11-28

class Solution {
public:
    const int mod = 1e9 + 7;
    int numberOfWays(string corridor) {
        int x = 1, y = 0, z = 0;
        for(auto &ch : corridor) {
            x = (x + z)%mod;
            if(ch == 'S') {
                z = y;
                y = x;
                x = 0;
            }
        }
        return z;
    }
};