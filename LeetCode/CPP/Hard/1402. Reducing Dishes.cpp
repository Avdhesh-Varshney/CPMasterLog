// Problem Link
// https://leetcode.com/problems/reducing-dishes/

// Solution:
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int ans = 0;
        for(int i = 0; i < satisfaction.size(); i++) {
            int cnt = 1, tmp = 0;
            for(int j = i; j < satisfaction.size(); j++) {
                tmp += satisfaction[j]*cnt;
                cnt++;
            }
            ans = max(ans, tmp);
        }
        return ans;
    }
};