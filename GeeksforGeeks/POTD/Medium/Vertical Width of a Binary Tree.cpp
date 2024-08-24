// 05 July 2024

//Back-end complete function Template for C++
class Solution {
    void count(Node* root, set<int>& s, int pos) {
        if(!root) return;
        s.insert(pos);
        if(root->left) count(root->left, s, pos-1);
        if(root->right) count(root->right, s, pos+1);
    }
  public:
    // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        // code here
        set<int> s;
        count(root, s, 0);
        return s.size();
    }
};