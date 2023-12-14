// Problem Link
// https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/

// Solution:
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> v;
        for(int i = 0; i < rectangles.size(); i++) {
            if(rectangles[i][0] > rectangles[i][1])
                v.push_back(rectangles[i][1]);
            else
                v.push_back(rectangles[i][0]);
        }
        int large = 0, count = 0;
        for(int i = 0; i < v.size(); i++)
            if(large < v[i])
                large = v[i];
        for(int i = 0; i < v.size(); i++)
            if(large == v[i])
                count++;
        return count;
    }
};