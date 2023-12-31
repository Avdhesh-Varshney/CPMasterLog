// https://leetcode.com/problems/image-smoother/description/?envType=daily-question&envId=2023-12-19

class Solution {
private:
    int smoothen(int& m, int& n, const vector<vector<int>>& img, int x, int y) {
        int sum = 0, count = 0;
        for(int i = -1; i <= 1; ++i) {
            for(int j = -1; j <= 1; ++j) {
                int nx = x + i, ny = y + j;
                if(nx >= 0 && nx < m && ny >= 0 && ny < n) {
                    sum += img[nx][ny];
                    ++count;
                }
            }
        }
        return sum / count;
    }
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();
        vector<vector<int>> res(m, vector<int>(n, 0));
        for(int i = 0; i < m; ++i)
            for(int j = 0; j < n; ++j) res[i][j] = smoothen(m, n, img, i, j);
        return res;
    }
};