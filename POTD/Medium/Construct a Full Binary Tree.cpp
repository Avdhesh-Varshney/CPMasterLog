// 23 May 2023

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution{
  public:
    Node* construct(int pre[], int i, int preMirror[], int j, int size) {
        Node *root = new Node(pre[i]);
        int size_ = size/2;
        if(size_ > 0) {
            root->left = construct(pre, i+1, preMirror, i+size_+1, size_);
            root->right = construct(pre, i+size_+1, preMirror, i+1, size_);
        }
        return root;
    }
    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        // Code here
        return construct(pre, 0, preMirror, 0, size);
    }
};

void printInorder(Node* node) {
    if(node == NULL) return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int preOrder[n];
        int preOrderMirror[n];
        for(int i = 0; i < n; i++) cin >> preOrder[i];
        for(int i = 0; i < n; i++) cin >> preOrderMirror[i];
        Solution obj;
        printInorder(obj.constructBinaryTree(preOrder, preOrderMirror, n));
        cout << endl;
    }
    return 0;
}