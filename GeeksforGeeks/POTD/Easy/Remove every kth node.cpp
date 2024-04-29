// 29 April 2024

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data) {
    struct Node* new_node = new Node(new_data);
    if(*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

class Solution {
    public:
    Node* deleteK(Node *head,int K){
        //Your code here
        if(K == 1 || head == NULL) return NULL;
        Node *ans = new Node(head->data);
        Node *t = ans;
        int cnt = 0;
        while(head != NULL) {
            ++cnt;
            if(cnt%K != 0) {
                Node *temp = new Node(head->data);
                t->next = temp;
                t = t->next;
            }
            head = head->next;
        }
        return ans->next;
    }
};

int main() {
    int T, i, n, l;
    cin >> T;
    while(T--) {
        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        for(i = 1; i <= n; i++) {
            cin >> l;
            append(&head, &tail, l);
        }
        int K;
        cin >> K;
        Solution obj;
        Node *res = obj.deleteK(head, K);
        Node *temp = res;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    return 0;
}