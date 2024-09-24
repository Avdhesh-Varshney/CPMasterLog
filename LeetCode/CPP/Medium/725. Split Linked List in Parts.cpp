// https://leetcode.com/problems/split-linked-list-in-parts/description/

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<int> v;
        while(head) {
            v.emplace_back(head->val);
            head = head->next;
        }
        int n = v.size(), n_ele = n/k, rem = n%k;
        vector<ListNode*> ans;
        for(int i = 0; i < n; i++) {
            ListNode* temp = new ListNode(v[i]);
            ListNode* h = temp;
            for(int j = i+1; j < n && j < i+n_ele+(rem != 0); j++) {
                ListNode* temp2 = new ListNode(v[j]);
                h->next = temp2;
                h = h->next;
            }
            if(rem) { i += n_ele; --rem; }
            else i += (n_ele-1);
            ans.emplace_back(temp);
        }
        ListNode* temp = new ListNode();
        while(ans.size() != k) ans.emplace_back(temp->next);
        return ans;
    }
};