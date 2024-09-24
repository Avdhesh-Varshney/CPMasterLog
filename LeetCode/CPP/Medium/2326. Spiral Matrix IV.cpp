// https://leetcode.com/problems/spiral-matrix-iv/description

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        int x = 1, y = 0, i = 0, j = -1;
        int bound_x = m-1, bound_y = n-1, b_x = 0, b_y = 0;
        while(head) {
            if(j == bound_y && x == 1 && y == 0) { x = 0; y = 1; ++b_x; }
            if(i == bound_x && x == 0 && y == 1) { x = -1; y = 0; --bound_y; }
            if(j == b_y && x == -1 && y == 0) { x = 0; y = -1; --bound_x; }
            if(i == b_x && x == 0 && y == -1) { x = 1; y = 0; ++b_y; }

            j += x; i += y;

            ans[i][j] = head->val;
            head = head->next;
        }
        return ans;
    }
};