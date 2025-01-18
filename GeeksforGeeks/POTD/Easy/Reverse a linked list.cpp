// 18 Jan, 2025

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        if(!head) return head;
        stack<int> st;
        while(head) {
            st.push(head->data);
            head = head->next;
        }
        Node* ans = new Node(st.top()); st.pop();
        Node* res = ans;
        while(!st.empty()) {
            Node* temp = new Node(st.top());
            ans->next = temp;
            ans = ans->next;
            st.pop();
        }
        return res;
    }
};