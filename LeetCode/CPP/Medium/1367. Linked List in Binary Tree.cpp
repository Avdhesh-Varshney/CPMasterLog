// https://leetcode.com/problems/linked-list-in-binary-tree/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool check(ListNode* head, TreeNode* root) {
        if(!head && !root) return true;
        if(head && !root) return false;
        if(!head) return true;
        if(!root) return false;
        if(head->val == root->val) return check(head->next, root->left) || check(head->next, root->right);
        return false;
    }
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!head || !root) return false;
        if(head->val == root->val) {
            if(head->next != nullptr) {
                if(check(head->next, root->left) || check(head->next, root->right)) return true;
            } else return true;
        }
        return isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};