// https://leetcode.com/problems/binary-tree-inorder-traversal/description/?envType=daily-question&envId=2023-12-09

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
    vector<int>ans;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return ans;
        inorderTraversal(root->left);
        ans.emplace_back(root->val);
        inorderTraversal(root->right);
        return ans;
    }
};