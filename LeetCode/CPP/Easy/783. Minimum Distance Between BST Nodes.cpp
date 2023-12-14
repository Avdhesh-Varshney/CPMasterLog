// Problem Link
// https://leetcode.com/problems/minimum-distance-between-bst-nodes/

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
    vector<int> v;
    void change(TreeNode* root) {
        if(root == NULL)
            return;
        change(root->left);
        v.push_back(root->val);
        change(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        change(root);
        int diff = INT_MAX;
        for (int i = 1; i < v.size(); i++)
            diff = min(diff, v[i] - v[i-1]);
        return diff;
    }
};