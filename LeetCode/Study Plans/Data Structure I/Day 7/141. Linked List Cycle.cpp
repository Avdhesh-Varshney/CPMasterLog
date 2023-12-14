// Problem Link
// https://leetcode.com/problems/linked-list-cycle/

// Solution:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        if(head->next == NULL)
            return false;
        int cnt = 10002;
        while(head->next != NULL && cnt > 0) {
            cnt--;
            head = head->next;
        }
        if(cnt == 0)
            return true;
        return false;
    }
};