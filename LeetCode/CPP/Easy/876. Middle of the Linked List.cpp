// Problem Link
// https://leetcode.com/problems/middle-of-the-linked-list/

// Solution:
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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode* h = head;
        while(head->next != nullptr) {
            n++;
            head = head->next;
        }
        if(n%2 == 0)
            for(int i = 0; i < n/2; i++)
                h = h->next;
        else
            for(int i = 0; i <= n/2; i++)
                h = h->next;
        return h;
    }
};