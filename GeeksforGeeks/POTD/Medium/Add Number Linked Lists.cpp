// 22 Jan, 2025

class Solution {
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        if(!num1) return num2;
        if(!num2) return num1;
        vector<int> v1, v2;
        while(num1) {
            v1.emplace_back(num1->data);
            num1 = num1->next;
        }
        while(num2) {
            v2.emplace_back(num2->data);
            num2 = num2->next;
        }
        if(v1.size() < v2.size()) swap(v1, v2);
        int carry = 0, i = v1.size()-1, j = v2.size()-1;
        for(; i >= 0 && j >= 0; i--, j--) {
            int temp = v1[i]+v2[j]+carry;
            v1[i] = temp%10;
            carry = temp/10;
        }
        while(carry > 0 && i >= 0) {
            int temp = v1[i]+carry;
            v1[i] = temp%10;
            carry = temp/10;
            i--;
        }
        Node* ans = new Node(carry);
        Node* res = ans;
        for(auto &i : v1) {
            Node* temp = new Node(i);
            ans->next = temp;
            ans = ans->next;
        }
        while(res) {
            if(res->data != 0) return res;
            res = res->next;
        }
        return res;
    }
};