// Problem Link:
// https://leetcode.com/problems/daily-temperatures/

// Solution:
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int, int>> st;
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            while(!st.empty() && st.top().first < temperatures[i]) {
                auto [num,day] = st.top();
                ans[day] = i-day;
                st.pop();
            }
            st.push({temperatures[i], i});
        }
        return ans;
    }
};