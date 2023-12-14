// Problem Link
// https://leetcode.com/problems/binary-tree-preorder-traversal/

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
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == nullptr)
            return ans;
        if(root->left == nullptr and root->right == nullptr) {
            ans.push_back(root->val);
            return ans;
        }
        ans.push_back(root->val);
        if(root->left != nullptr)
            preorderTraversal(root->left);
        if(root->right != nullptr)
            preorderTraversal(root->right);
        return ans;
    }
};