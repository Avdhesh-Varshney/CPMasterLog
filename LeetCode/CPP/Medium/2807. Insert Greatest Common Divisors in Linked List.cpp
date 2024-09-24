// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/

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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *curr = head, *prev = head;
        curr = curr->next;
        while(curr) {
            ListNode *t = new ListNode(__gcd(prev->val, curr->val), curr);
            prev->next = t;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};