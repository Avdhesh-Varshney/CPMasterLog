// 20 Dec, 2024

class Solution {
    vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    void changeDir(int&n, int& m, int& i, int& j, int& direction) {
        if (i >= n) {
            --i;
            direction = (direction + 1) % 4;
        } else if (j >= m) {
            --j;
            direction = (direction + 1) % 4;
        } else if (i < 0) {
            ++i;
            direction = (direction + 1) % 4;
        } else if (j < 0) {
            ++j;
            direction = (direction + 1) % 4;
        }
        i += dir[direction][0];
        j += dir[direction][1];
    }
  public:
    vector<int> spirallyTraverse(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        int i = 0, j = 0, direction = 0;
        int top = 0, bottom = n - 1, left = 0, right = m - 1;
        vector<int> ans;
        while(ans.size() < n*m) {
            if(i >= top && i <= bottom && j >= left && j <= right && mat[i][j] != -1) {
                ans.emplace_back(mat[i][j]);
                mat[i][j] = -1;
            } else {
                if (direction == 0) ++top;
                else if (direction == 1) --right;
                else if (direction == 2) --bottom;
                else ++left;

                changeDir(n, m, i, j, direction);
                continue;
            }
            i += dir[direction][0];
            j += dir[direction][1];

            if (i < top || i > bottom || j < left || j > right || mat[i][j] == -1) {
                i -= dir[direction][0];
                j -= dir[direction][1];
                direction = (direction + 1) % 4;
                i += dir[direction][0];
                j += dir[direction][1];
            }
        }
        return ans;
    }
};