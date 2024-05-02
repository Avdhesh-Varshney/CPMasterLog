// 02 May 2024

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
    if(str.length() == 0 || str[0] == 'N') return NULL;
    vector<string> ip;
    istringstream iss(str);
    for(string str; iss >> str;)
        ip.push_back(str);
    
    Node *root = new Node(stoi(ip[0]));

    queue<Node*> queue;
    queue.push(root);
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
        Node *currNode = queue.front();
        queue.pop();

        string currVal = ip[i];
        if(currVal != "N") {
            currNode->left = new Node(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if(i >= ip.size()) break;
        currVal = ip[i];

        if(currVal != "N") {
            currNode->right = new Node(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        // Your code here
        queue<Node*> q;
        q.push(root);
        vector<int> v;
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            if(it != NULL) v.push_back(it->data);
            else v.push_back(-1);
            if(it != NULL) {
                q.push(it->left);
                q.push(it->right);
            }
        }
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &a) {
        // Your code here
        queue<Node*> q;
        Node *root = new Node(a[0]);
        q.push(root);
        int i = 1, n = (int)(a.size());
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            if(i < n) {
                Node *x = NULL;
                if(a[i] != -1) x = new Node(a[i]);
                i++;
                it->left = x;
                if(x != NULL) q.push(x);
            } else it->left = NULL;
            if(i < n) {
                Node *x = NULL;
                if(a[i] != -1) x = new Node(a[i]);
                i++;
                it->right = x;
                if(x != NULL) q.push(x);
            } else it->right = NULL;
        }
        return root;
    }

};

void inorder(Node *root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void _deleteTree(Node *node) {
    if(node == NULL) return;
    _deleteTree(node->left);
    _deleteTree(node->right);
    delete node;
}

void deleteTree(Node **node_ref) {
    _deleteTree(*node_ref);
    *node_ref = NULL;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);

        Solution serial, deserial;
        vector<int> A = serial.serialize(root);
        Node* temp = root;
        deleteTree(&root);
        Node *getRoot = deserial.deSerialize(A);
        inorder(getRoot);
        cout << endl;
    }
    return 0;
}