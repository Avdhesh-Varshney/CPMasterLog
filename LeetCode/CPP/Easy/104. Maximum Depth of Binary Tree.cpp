// Problem Link
// https://leetcode.com/problems/maximum-depth-of-binary-tree/

// Solution:

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
    int ans = 0;
    void calc(TreeNode* root, int val) {
        if(root == NULL)
            return;
        val++;
        ans = max(val, ans);
        calc(root->left, val);
        calc(root->right, val);
    }
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return ans;
        calc(root, 0);
        return ans;
    }
};