// Question 2

// Problem Link
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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

// Way :- 1
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *f = head, *s = head;
        for (int i = 0; i < n; i++)
            f = f->next;
        if(!f)
            return head->next;
        while(f->next) {
            f = f->next;
            s = s->next;
        }
        s->next = s->next->next;
        return head;
    }
};

// Way :- 2
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* nodes[30];
        ListNode* cur = head;
        int len = 0;
        while(cur) {
            nodes[len++] = cur;
            cur = cur->next;
        }
        if(n == len) return head->next;
        nodes[len-n-1]->next = nodes[len-n]->next;
        return head;
    }
};