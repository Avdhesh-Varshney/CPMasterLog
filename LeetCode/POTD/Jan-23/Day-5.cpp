// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/?envType=daily-question&envId=2023-01-05

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        stack<pair<int, int>> s;
        for(int i = points.size()-1; i >= 0; i--)
        s.push({points[i][0], points[i][1]});
        int count = 1;
        int temp = s.top().second;
        s.pop();
        while(!s.empty()) {
            if(s.top().first <= temp) {
                while(!s.empty() && s.top().first <= temp) {
                    temp = min(temp, s.top().second);
                    s.pop();
                }
            }
            else {
                temp = s.top().second;
                s.pop();
                count++;
            }
        }
        return count;
    }
};