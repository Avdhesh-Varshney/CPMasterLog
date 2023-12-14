// Problem Link
// https://leetcode.com/problems/max-points-on-a-line/

// Solution:
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int count = 1;
        for(int i = 0; i < points.size(); i++) {
            unordered_map<double, int> m;
            for(int j = 0; j < points.size(); j++) {
                if(i != j) {
                    double slope = (double)(points[i][1] - points[j][1]) / (points[i][0] - points[j][0]);
                    m[slope]++;
                    count = max(count, m[slope] + 1);
                }
            }
        }
        return count;
    }
};