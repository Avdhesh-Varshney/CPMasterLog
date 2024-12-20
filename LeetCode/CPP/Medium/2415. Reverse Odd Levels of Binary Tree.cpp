// Problem Link:
// https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/description

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
    void recur(TreeNode* l, TreeNode* r, int level) {
        if(!l || !r) return;
        recur(l->left, r->right, level+1);
        recur(l->right, r->left, level+1);
        if(level%2 == 0) swap(l->val, r->val);
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return root;
        int levels = 0;
        TreeNode* head = root;
        while(head != NULL) { ++levels; head = head->left; }
        recur(root->left, root->right, 0);
        return root;
    }
};