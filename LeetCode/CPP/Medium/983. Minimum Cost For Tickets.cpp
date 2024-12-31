// Problem Link
// https://leetcode.com/problems/minimum-cost-for-tickets/

// Solution 1:
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

// Solution 2:
class Solution {
    int day1Cost, day7Cost, day30Cost, n;
    vector<int> d;
    int solve(int id, vector<int>& dp) {
        if(id >= n) return 0;
        if(dp[id] != -1) return dp[id];
        int cost1 = day1Cost + solve(id+1, dp);

        int id7 = id;
        while(id7 < n && d[id7] < d[id]+7) ++id7;
        int cost7 = day7Cost + solve(id7, dp);

        int id30 = id;
        while(id30 < n && d[id30] < d[id]+30) ++id30;
        int cost30 = day30Cost + solve(id30, dp);

        return dp[id] = min({cost1, cost7, cost30});
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        n = days.size();
        d = days;
        day1Cost = costs[0];
        day7Cost = costs[1];
        day30Cost = costs[2];
        vector<int> dp(366, -1);
        return solve(0, dp);
    }
};