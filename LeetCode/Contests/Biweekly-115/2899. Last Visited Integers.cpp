// Problem Link - https://leetcode.com/contest/biweekly-contest-115/problems/last-visited-integers/

class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        stack<int> st;
        vector<int> ans;
        int n = words.size();
        for(int i = 0; i < n; i++) {
            if(words[i] == "prev") {
                stack<int> x = st;
                while(i < n && words[i] == "prev") {
                    if(!x.empty()) {
                        ans.emplace_back(x.top());
                        x.pop();
                    } else {
                        ans.emplace_back(-1);
                    }
                    ++i;
                }
                if(i < n && words[i] != "prev")
                    st.push(stoi(words[i]));
            } else st.push(stoi(words[i]));
        }
        return ans;
    }
};