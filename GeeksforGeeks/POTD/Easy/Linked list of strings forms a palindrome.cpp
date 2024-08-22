// 02 July 2024

/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string str = "";
        while(head) {
            str += head->data;
            head = head->next;
        }
        string s = str;
        reverse(s.begin(), s.end());
        return s == str;
    }
};
