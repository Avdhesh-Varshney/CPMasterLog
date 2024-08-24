// 01 July 2024

/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

// Function to make binary tree from linked list.
void drawTree(TreeNode *&root, vector<int>& v, int& n, int id) {
    if(id >= n || v[id] == -1) return;
    TreeNode *node = new TreeNode(v[id]);
    root = node;
    v[id] = -1;
    drawTree(root->left, v, n, 2*id+1);
    drawTree(root->right, v, n, 2*id+2);
}
void convert(Node *head, TreeNode *&root) {
    // Your code here f
    vector<int> v;
    while(head) {
        v.push_back(head->data);
        head = head->next;
    }
    int n = v.size();
    drawTree(root, v, n, 0);
}
