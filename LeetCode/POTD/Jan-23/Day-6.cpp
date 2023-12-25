// https://leetcode.com/problems/maximum-ice-cream-bars/description/?envType=daily-question&envId=2023-01-06

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(int i=0;i<costs.size();i++){
            if(coins>=costs[i]){
                ans++;
                coins-=costs[i];
            }
        }
        return ans;
    }
};