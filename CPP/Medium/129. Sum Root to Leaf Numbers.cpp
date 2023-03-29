// Problem Link
// https://leetcode.com/problems/sum-root-to-leaf-numbers/

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
    int n;
    vector<int> v;
    int doSum(TreeNode* root, int n) {
        n = n*10 + root->val;
        if(root->left == nullptr and root->right == nullptr) {
            v.emplace_back(n);
            n /= 10;
            return n;
        }
        if(root->left != nullptr) {
            n = doSum(root->left, n);
        }
        if(root->right != nullptr) {
            n = doSum(root->right, n);
        }
        return n/10;
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        doSum(root, 0);
        for(auto &i : v)
            ans += i;
        return ans;
    }
};