// 28 May 2023

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

int getNthFromLast(struct Node* head, int n);

class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node* temp = head;
           int size = 0;
           while(temp) {
               ++size;
               temp = temp->next;
           }
           size = size - n;
           if(size < 0) return -1;
           while(size--) {
               head = head->next;
           }
           return head->data;
    }
};

int main() {
    int T, i, n, l, k;
    cin >> T;
    while(T--) {
        struct Node *head = NULL, *tail = NULL;
        cin >> n >> k;
        int firstdata;
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        for(int i = 1; i < n; i++) {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }

        Solution obj;
        cout << obj.getNthFromLast(head, k) << endl;
    }
    return 0;
}