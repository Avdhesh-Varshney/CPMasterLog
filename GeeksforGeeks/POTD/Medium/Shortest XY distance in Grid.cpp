// 20 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int n, int m) {
        // code here
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<pair<int, int>, int>> q;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 'X') {
                    q.push({{i, j}, 0});
                    vis[i][j] = true;
                }
            }
        }
        int ans = 0;
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i < size; i++) {
                auto it = q.front();
                q.pop();
                int x = it.first.first;
                int y = it.first.second;
                int dis = it.second;
                if(grid[x][y] == 'Y')
                    return ans = it.second;
                for(int j = 0; j < 4; j++) {
                    int x1 = x+dx[j];
                    int y1 = y+dy[j];
                    if(y1 >= 0 && x1 >= 0 && y1 < m && x1 < n) {
                        if(vis[x1][y1] == false) {
                            vis[x1][y1] = true;
                            q.push({{x1, y1}, dis+1});
                        }
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, M;
        char ch;
        cin >> N >> M;
        vector<vector<char>> grid;
        for(int i = 0; i < N; i++) {
            vector<char> col;
            for(int j = 0; j < M; j++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }
        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}