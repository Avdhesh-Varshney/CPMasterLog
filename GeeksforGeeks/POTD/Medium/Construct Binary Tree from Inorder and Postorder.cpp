// 04 May 2024

/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
    public:
    unordered_map<int, int> m;
    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        for(int i = 0; i < n; i++) m[in[i]] = i;
        return solve(post, 0, n-1, 0, n-1);
    }
    Node *solve(int post[], int sp, int ep, int si, int ei) {
        if(sp > ep || si > ei) return nullptr;
        Node *ans = new Node(post[ep]);
        int id = m[post[ep]], num = id-si;
        ans->left = solve(post, sp, sp+num-1, si, id-1);
        ans->right = solve(post, sp+num, ep-1, id+1, ei);
        return ans;
    }
};