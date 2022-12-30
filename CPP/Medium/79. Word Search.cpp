// Problem Link:
// https://leetcode.com/problems/word-search/

// Solution:
class Solution {
public:
    bool check(vector<vector<char>>& board, string word, int i, int j, int count) {
        if(word.length() == count)
            return true;
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[count])
            return false;
        char temp = board[i][j];
        board[i][j] = '*';
        bool ans = check(board, word, i-1, j, count+1) || 
                    check(board, word, i+1, j, count+1) || 
                    check(board, word, i, j-1, count+1) || 
                    check(board, word, i, j+1, count+1);
        board[i][j] = temp;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(board[i][j] == word[0] and check(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
};