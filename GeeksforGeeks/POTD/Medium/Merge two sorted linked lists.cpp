// 20 Jan, 2025

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
        Node* ans = new Node(0);
        Node* res = ans;
        while(head1 != NULL && head2 != NULL) {
            if(head1->data < head2->data) {
                Node* temp = new Node(head1->data);
                ans->next = temp;
                head1 = head1->next;
            } else {
                Node* temp = new Node(head2->data);
                ans->next = temp;
                head2 = head2->next;
            }
            ans = ans->next;
        }
        while(head1 != NULL) {
            Node* temp = new Node(head1->data);
            ans->next = temp;
            ans = ans->next;
            head1 = head1->next;
        }
        while(head2 != NULL) {
            Node* temp = new Node(head2->data);
            ans->next = temp;
            ans = ans->next;
            head2 = head2->next;
        }
        return res->next;
    }
};