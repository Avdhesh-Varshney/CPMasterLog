// https://leetcode.com/problems/find-mode-in-binary-search-tree/description/?envType=daily-question&envId=2023-11-01

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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> m;
        int l = INT_MIN;
        fillBST(root, m, l);
        vector<int> ans;
        for(auto &i : m) if(i.second == l) ans.emplace_back(i.first);
        return ans;
    }
    void fillBST(TreeNode* root, unordered_map<int, int>& m, int& l) {
        if(!root) return;
        m[root->val]++;
        if(m[root->val] > l) l = m[root->val];
        fillBST(root->left, m, l);
        fillBST(root->right, m, l);
    }
};