// Problem Link:
// https://leetcode.com/problems/minimum-number-of-operations-to-sort-a-binary-tree-by-level/description/

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
    void getLevelElements(TreeNode* root, unordered_map<int, vector<int>>& mp, int level) {
        if(!root) return;
        mp[level].emplace_back(root->val);
        getLevelElements(root->left, mp, level+1);
        getLevelElements(root->right, mp, level+1);
    }
    int getMinSwaps(vector<int>& original) {
        int swaps = 0;
        vector<int> target = original;
        sort(target.begin(), target.end());
        unordered_map<int, int> pos;
        for(int i = 0; i < original.size(); i++) pos[original[i]] = i;
        for(int i = 0; i < original.size(); i++) {
            if(original[i] != target[i]) {
                swaps++;
                int curPos = pos[target[i]];
                pos[original[i]] = curPos;
                swap(original[curPos], original[i]);
            }
        }
        return swaps;
    }
public:
    int minimumOperations(TreeNode* root) {
        unordered_map<int, vector<int>> mp;
        getLevelElements(root, mp, 0);
        int ans = 0;
        for(auto &i : mp) ans += getMinSwaps(i.second);
        return ans;
    }
};