// https://leetcode.com/problems/balance-a-binary-search-tree/description/?envType=daily-question&envId=2024-06-26

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
    void inorder(TreeNode* root, vector<int>& v) {
        if(!root) return;
        if(root->left != nullptr) inorder(root->left, v);
        v.emplace_back(root->val);
        if(root->right != nullptr) inorder(root->right, v);
    }
    TreeNode* balance(vector<int>& v, int left, int right) {
        if(left > right) return NULL;
        int mid = (right-left)/2 + left;
        TreeNode* leftNode = (left > mid-1)? NULL: balance(v, left, mid-1);
        TreeNode* rightNode = (mid+1 > right)? NULL: balance(v, mid+1, right);
        return new TreeNode(v[mid], leftNode, rightNode);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inorder(root, v);
        return balance(v, 0, v.size()-1);
    }
};