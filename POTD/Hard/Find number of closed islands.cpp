// 18 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool check(vector<vector<int>>& matrix, int r, int c) {
        if (r < 0 or r == matrix.size() or c < 0 or c == matrix[0].size() or matrix[r][c] == 0)
            return false;
        return true;
    }
    void dfs(vector<vector<int>>& matrix, int r, int c) {
        if(check(matrix, r, c) == false) return;
        matrix[r][c] = 0;
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};
        for(int i = 0; i < 4; i++)
            dfs(matrix, r + dx[i], c + dy[i]);
    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        for(int r = 0; r < N; r++)
            for(int c = 0; c < M; c++)
                if (r == 0 or r == N - 1 or c == 0 or c == M - 1)
                    dfs(matrix, r, c);     
        int cnt = 0;
        for(int r = 0; r < N; r++) {
            for(int c = 0; c < M; c++) {
                if (matrix[r][c] == 1) {
                    cnt++;
                    dfs(matrix, r, c);
                }
            }
        }
        return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> matrix(N, vector<int>(M, 0));
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << endl;
    }
    return 0;
}