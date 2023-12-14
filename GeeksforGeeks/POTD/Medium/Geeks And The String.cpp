// 23 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string removePair(string s) {
        // code here
        stack<string> st;
        string t(1, s[0]);
        st.push(t);
        for(int i = 1; i < s.size(); i++) {
            if(!st.empty() and st.top().back() == s[i])
                st.top().pop_back();
            else {
                string temp(1, s[i]);
                st.top() += temp;
            }
        }
        if(st.top() == "")
            return "-1";
        return st.top();
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        Solution obj;
        string res = obj.removePair(s);
        cout << res << endl;
    }
    return 0;
}
