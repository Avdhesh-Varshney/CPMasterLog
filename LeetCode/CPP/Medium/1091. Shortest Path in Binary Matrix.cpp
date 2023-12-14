// Problem Link
// https://leetcode.com/problems/shortest-path-in-binary-matrix/

// Solution:
class Solution {
public:
    bool isValid(int& i, int& j, vector<vector<int>> &vis, int& n) {
        if(i >= 0 and i < n and j >= 0 and j < n and vis[i][j] == 0) return true;
        return false;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int dx[] = {-1, 1, 0, 0, -1, 1, -1, 1};
        int dy[] = {0, 0, -1, 1, -1, -1, 1, 1};
        int n = grid.size();
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {0, 0}});
        if(grid[0][0] != 0) return -1;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        vis[0][0] = 1;
        while(!q.empty()) {
            int dist = q.front().first;
            int i = q.front().second.first;
            int j = q.front().second.second;
            q.pop();
            if(i == n-1 and j == n-1) return dist+1;
            for(int k = 0; k < 8; k++) {
                int newR = i + dx[k], newC = j + dy[k];
                if(isValid(newR, newC, vis, n) and grid[newR][newC] == 0) {
                    q.push({dist+1, {newR, newC}});
                    vis[newR][newC] = 1;
                }
            }
        }
        return -1;
    }
};