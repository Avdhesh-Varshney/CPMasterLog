// 03 May 2024

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
    public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
        // Your code here
        vector<int> ans;
        solve(root, k, ans);
        return ans;
    }
    void solve(struct Node *root, int k, vector<int>& ans) {
        if(root == NULL || k < 0) return;
        if(k == 0) {
            ans.emplace_back(root->data);
            return;
        }
        if(root->left != nullptr) solve(root->left, k-1, ans);
        if(root->right != nullptr) solve(root->right, k-1, ans);
    }
};