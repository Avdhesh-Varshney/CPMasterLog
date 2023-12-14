// Problem Link
// https://leetcode.com/problems/reorder-list/

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
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode* h = head;
        while(head != NULL) {
            v.emplace_back(head->val);
            head = head->next;
        }
        int j = 0;
        if(v.size()%2 == 0) {
            while(h != NULL && j < v.size()/2) {
                h->val = v[j];
                if(h->next != nullptr)
                    h->next->val = v[v.size()-1-j];
                h = h->next->next;
                j++;
            }
        }
        else {
            while(h != NULL && j < (v.size()/2) + 1 ) {
                h->val = v[j];
                if(h->next != nullptr)
                    h->next->val = v[v.size()-1-j];
                if(j < v.size()/2)
                    h = h->next->next;
                j++;
            }
        }
    }
};