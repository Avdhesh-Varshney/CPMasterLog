// 01 May 2023

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    vector<Node*> children;
    Node(int val) {
        data = val;
    }
};

class N_ary_Tree {
    public:
    Node *root;
    int size;
    N_ary_Tree() {
        root = NULL;
        size = 0;
    }
    Node *add(int new_key, Node *parent_key = NULL) {
        Node *new_node = new Node(new_key);
        if(parent_key == NULL) {
            root = new_node;
            size = 1;
        }
        else {
            parent_key->children.push_back(new_node);
            size += 1;
        }
        return new_node;
    }
};

class Solution{
public:
    map<vector<int>,int> mb;
    vector<int> dfs(Node *root) {
        if(!root) return {};
        vector<int> v, temp;
        for(int i = 0; i < root->children.size(); i++) {
            temp = dfs(root->children[i]);
            if(temp.size() > 0)
                v.insert(v.end(), temp.begin(), temp.end());
        }
        v.push_back(root->data);
        mb[v]++;
        return v;
    }
    int duplicateSubtreeNaryTree(Node *root){
        // Code here
        vector<int> v = dfs(root);
        int ans = 0;
        for(auto &it : mb)
            if(it.second > 1 and it.first.size() > 0) ans++;
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        if(i == 0) {
            string p;
            getline(cin, p);
        }
        string str;
        getline(cin, str);
        stringstream st(str);
        vector<string> s;
        string y;
        while(st >> y) {
            s.push_back(y);
        }
        N_ary_Tree *tree = new N_ary_Tree();
        Node *curr;
        queue<Node*> q;
        for(int i = 0; i < s.size(); i++) {
            if(i == 0) {
                curr = tree->add(stoi(s[0]));
            } else if(s[i] == " ") {
                continue;
            } else if(q.size() and s[i] == "N") {
                curr = q.front();
                q.pop();
            } else if(s[i] != "N") {
                q.push(tree->add(stoi(s[i]), curr));
            }
        }
        Solution ob;
        int res = ob.duplicateSubtreeNaryTree(tree->root);
        cout << res << endl;
    }
    return 0;
}