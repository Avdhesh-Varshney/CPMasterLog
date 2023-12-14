// 30 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool dfs(int i, int j, string pat, int index, vector<vector<char>>& board, vector<vector<bool>>& vis, int& n, int& m) {
        if(index == (pat.size())) return 1;
        if(i < 0 || j < 0 || i >= n || j >= m) return 0;
        
        if(vis[i][j] == true) return 0;
        if(board[i][j] !=  pat[index]) return 0;
        
        vis[i][j] = true;
        
        bool a = dfs(i-1, j, pat, index + 1, board, vis, n, m);
        bool b = dfs(i+1, j, pat, index + 1, board, vis, n, m);
        bool c = dfs(i, j-1, pat, index + 1, board, vis, n, m);
        bool d = dfs(i, j+1, pat, index + 1, board, vis, n, m);
        
        vis[i][j] = false;
        
        return (a|b|c|d);
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size(), m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, 0));
        
        for(int i = 0; i< n; i++)
            for(int j = 0; j < m; j++)
                if(board[i][j] == word[0])
                    if(dfs(i, j, word, 0, board, vis, n, m)) return true;
        return false;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> board(n, vector<char>(m, '*'));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> board[i][j];
        string word;
        cin >> word;

        Solution obj;
        bool ans = obj.isWordExist(board, word);
        if(ans) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}