// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/?envType=daily-question&envId=2023-12-21

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });
        int width = 0;
        for(int i = points.size()-1; i > 0; i--) width = max(width, (points[i][0] - points[i-1][0]));
        return width;
    }
};