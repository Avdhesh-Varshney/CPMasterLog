// 03 July 2024

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        map<int, int> m;
        while(head) {
            m[head->data]++;
            head = head->next;
        }
        struct Node* ans = new Node(1);
        struct Node* head2 = ans;
        for(auto &i : m) {
            if(i.second == 1) {
                struct Node* temp = new Node(i.first);
                head2->next = temp;
                head2 = head2->next;
            }
        }
        return ans->next;
    }
};