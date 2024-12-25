// Problem Link:
// https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/

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
    void extractRow(TreeNode* root, unordered_map<int, priority_queue<int>>& mp, int level) {
        if(!root) return;
        mp[level].push(root->val);
        extractRow(root->left, mp, level+1);
        extractRow(root->right, mp, level+1);
    }
public:
    vector<int> largestValues(TreeNode* root) {
        unordered_map<int, priority_queue<int>> mp;
        extractRow(root, mp, 0);
        vector<int> ans(mp.size(), 0);
        for(auto &i : mp) ans[i.first] = i.second.top();
        return ans;
    }
};