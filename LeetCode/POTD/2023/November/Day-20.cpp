// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/?envType=daily-question&envId=2023-11-20

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        unordered_map<char, int> mp;
        mp['M'] = 0, mp['P'] = 0, mp['G'] = 0;
        int cost[3] = {0}, flag[3] = {0};
        for(int i = garbage.size()-1; i >= 0; i--) {
            for(auto &ch : garbage[i]) {
                mp[ch]++;
                if(ch == 'M' && !flag[0]) flag[0] = 1;
                else if(ch == 'P' && !flag[1]) flag[1] = 1;
                else if(ch == 'G' && !flag[2]) flag[2] = 1;
            }
            if(i > 0) {
                if(flag[0]) cost[0] += travel[i-1];
                if(flag[1]) cost[1] += travel[i-1];
                if(flag[2]) cost[2] += travel[i-1];
            }
        }
        return cost[0] + cost[1] + cost[2] + mp['M'] + mp['P'] + mp['G'];
    }
};