// Problem Link
// https://leetcode.com/problems/validate-stack-sequences/

// Solution:
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;
        for(auto &i : pushed) {
            if(j < popped.size() && i == popped[j]) {
                j++;
                continue;
            }
            else if(!st.empty()) {
                if(j < popped.size() && st.top() == popped[j]) {
                    st.pop();
                    j++;
                    while(!st.empty() && j < popped.size() && st.top() == popped[j]) {
                        st.pop();
                        j++;
                    }
                    if(st.empty() && j < popped.size() && i == popped[j]) j++;
                    else st.push(i);
                }
                else st.push(i);
            }
            else st.push(i);
        }
        if(!st.empty()) {
            while(!st.empty()) {
                if(j < popped.size() && st.top() == popped[j]) {
                    st.pop();
                    j++;
                }
                else return false;
            }
        }
        return true;
    }
};