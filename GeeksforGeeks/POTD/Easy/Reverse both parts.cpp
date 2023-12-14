// 27 February 2023

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
void printList(Node *node) {
    while(node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
struct Node *inputList() {
    int n;
    scanf("%d", &n);
    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for(int i = 0; i < n-1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
    Node *reverse(Node *head, int k)
    {
        // code here
        if(head == NULL)
            return head;
        vector<int> v;
        Node* temp = head;
        while(temp != NULL) {
            v.push_back(temp->data);
            temp = temp->next;
        }
        int n = v.size();
        temp = head;
        for(int i = k-1; i >= 0; i--) {
            temp->data = v[i];
            temp = temp->next;
        }
        for(int i = n-1; i >= k; i--) {
            temp->data = v[i];
            temp = temp->next;
        }
        return head;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        struct Node *head = inputList();
        int k;
        cin >> k;
        Solution obj;
        Node *res = obj.reverse(head, k);
        printList(res);
    }
    return 0;
}