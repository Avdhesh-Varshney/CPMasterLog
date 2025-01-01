// https://leetcode.com/problems/construct-string-from-binary-tree/description/?envType=daily-question&envId=2023-12-08

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string tree2str(TreeNode* root) {
        string ans = "";
        solve(root, ans);
        ans.pop_back();
        return ans;
    }
    void solve(TreeNode* root, string& ans) {
        if(!root) return;
        ans += to_string(root->val);
        if(root->left == nullptr) {
            if(root->right != nullptr) {
                ans += '(';
                ans += ')';
            }
        } else  ans += '(';
        solve(root->left, ans);
        if(root->right != nullptr) ans += '(';
        solve(root->right, ans);
        ans += ')';
    }
};