// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/?envType=daily-question&envId=2024-07-05

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next == nullptr) return {-1, -1};
        vector<int> v;
        int last = head->val, pos = 1;
        head = head->next;
        while(head->next) {
            int curr = head->val, next = head->next->val;
            if(curr > last && curr > next) v.emplace_back(pos);
            else if(curr < last && curr < next) v.emplace_back(pos);
            ++pos;
            last = curr;
            head = head->next;
        }
        int n = v.size();
        if(n >= 2) {
            int mini = INT_MAX;
            for(int i = 1; i < n; i++) mini = min(mini, v[i]-v[i-1]);
            return {mini, v[n-1]-v[0]};
        }
        return {-1, -1};
    }
};