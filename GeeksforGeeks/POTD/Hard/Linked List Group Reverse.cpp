// 21 Jan, 2025

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(!head) return head;
        vector<int> arr;
        while(head) {
            arr.emplace_back(head->data);
            head = head->next;
        }
        Node* ans = new Node(0);
        Node* res = ans;
        int n = arr.size();
        for(int i = 0; i < n; i+=k) {
            for(int j = min(i+k, n)-1; j >= i; j--) {
                Node* temp = new Node(arr[j]);
                ans->next = temp;
                ans = ans->next;
            }
        }
        return res->next;
    }
};