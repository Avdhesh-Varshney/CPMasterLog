// 9 March 2023

#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;
    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n;
    cin >> n;
    char data;
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

class Solution {
  public:
    bool isAnagram(vector<int>& a, vector<int>& b) {
        for(int i = 0; i < 26; i++)
            if(a[i] != b[i])
                return false;
        return true;
    }
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        int len = s.length();
        vector<int> a(26), b(26), freq1(26);
        for(char ch : s)
            b[ch - 'a']++;
        Node* ptr1 = head;
        Node* ptr2 = head;
        Node *prev = NULL;
        for(int i = 0; i < len && (ptr2 != NULL); i++) {
            a[ptr2->data - 'a']++;
            prev = ptr2;
            ptr2 = ptr2->next;
        }
        ptr2 = prev;
        vector<Node* > res;
        while(ptr2->next != NULL) {
            bool ok = isAnagram(a, b);
            if(ok) {
                Node* prev1 = NULL;
                res.push_back(ptr1);
                Node* temp1 = ptr2;
                ptr2 = ptr2->next;
                if(temp1 != NULL)
                    temp1->next = NULL;
                ptr1 = ptr2;
                for(int i = 0; i < 26; i++)
                    a[i] = 0;
                for(int i = 0; i < len && (ptr2 != NULL); i++) {
                    a[ptr2->data - 'a']++;
                    prev1 = ptr2;
                    if(ptr2 != NULL)
                        ptr2 = ptr2->next;
                }
                ptr2 = prev1;
            }
            else {
                a[ptr1->data - 'a']--;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
                a[ptr2->data - 'a']++;
            }
        }
        bool ok = isAnagram(a, b);
        if(ok)
            res.push_back(ptr1);
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        struct Node *head = inputList();
        string s;
        cin >> s;
        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);
        for(int i = 0; i < res.size(); i++)
            printList(res[i]);
        if(res.size() == 0)
            cout << "-1" << endl;
    }
    return 0;
}