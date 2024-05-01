// 01 May 2024

#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head) {
    if(head == NULL) return;
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void append(struct Node **headRef, char data) {
    struct Node *new_node = new Node(data);
    struct Node *last = *headRef;

    if(*headRef == NULL) {
        *headRef = new_node;
        return;
    }
    while(last->next != NULL) last = last->next;
    last->next = new_node;
    return;
}

class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    bool check(char& ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    struct Node* arrangeCV(Node* head) {
        // Code here
        if(head == NULL) return head;
        Node* ans = new Node(head->data);
        Node* ans2 = new Node(head->data);
        
        Node* vowels = ans;
        Node* consonants = ans2;
        
        while(head != NULL) {
            Node* temp = new Node(head->data);
            if(check(head->data)) {
                vowels->next = temp;
                vowels = vowels->next;
            } else {
                consonants->next = temp;
                consonants = consonants->next;
            }
            head = head->next;
        }
        
        vowels->next = ans2->next;
        return ans->next;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        char tmp;
        struct Node *head = NULL;
        cin >> n;
        while(n--) {
            cin >> tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
    return 0;
}