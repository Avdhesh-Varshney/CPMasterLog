// 19 Jan, 2025

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        vector<int> arr;
        while(head) {
            arr.emplace_back(head->data);
            head = head->next;
        }
        int n = arr.size();
        k %= n;
        int pos = k;
        Node* ans = new Node(arr[pos++]);
        Node* res = ans;
        while(pos < n) {
            Node* temp = new Node(arr[pos++]);
            ans->next = temp;
            ans = ans->next;
        }
        for(int i = 0; i < k; i++) {
            Node* temp = new Node(arr[i]);
            ans->next = temp;
            ans = ans->next;
        }
        return res;
    }
};