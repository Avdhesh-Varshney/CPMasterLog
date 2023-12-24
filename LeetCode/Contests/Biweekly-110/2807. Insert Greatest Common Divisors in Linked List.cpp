// Problem Link - https://leetcode.com/contest/biweekly-contest-110/problems/insert-greatest-common-divisors-in-linked-list/

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
    void insert(ListNode *nodeBefore, ListNode *nodeAfter, int val) {
        ListNode *newNode = new ListNode(val);
        newNode->next = nodeAfter;
        nodeBefore->next = newNode;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        int val = temp->val;
        while(temp->next != nullptr) {
            int g = __gcd(val, temp->next->val);
            val = temp->next->val;
            insert(temp, temp->next, g);
            temp = temp->next->next;
        }
        return head;
    }
};