// Problem Link
// https://leetcode.com/problems/minimum-cost-for-tickets/

// Solution:
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int cost = 0;
        queue<pair<int, int >> month, week;
        for(auto day : days) {
            while(!month.empty() && month.front().first + 30 <= day)
                month.pop();
            while(!week.empty() && week.front().first + 7 <= day)
                week.pop();
            month.push(make_pair(day, cost+costs[2]));
            week.push(make_pair(day, cost+costs[1]));
            cost = min(cost+costs[0], min(month.front().second, week.front().second));
        }
        return cost;
    }
};