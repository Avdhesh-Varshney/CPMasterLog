// Problem Link
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

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
    unordered_set<int> v;
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL)
            return false;
        if(v.count(root->val))
            return true;
        v.insert(k - root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};