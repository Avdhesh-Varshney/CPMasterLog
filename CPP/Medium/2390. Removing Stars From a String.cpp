// Problem Link
// https://leetcode.com/problems/removing-stars-from-a-string/

// Solution:
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(auto &ch : s) {
            if(!st.empty()) {
                if(ch == '*') st.pop();
                else st.push(ch);
            }
            else st.push(ch);
        }
        s = "";
        while(!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};