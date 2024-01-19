// Problem Link - https://leetcode.com/contest/biweekly-contest-115/problems/longest-unequal-adjacent-groups-subsequence-i/

class Solution {
public:
    vector<int> longestBinarySubsequence(int& n, vector<int>& a) {
        vector<int> d(n, 1);
        vector<vector<int>> sequences(n, vector<int>());

        for (int i = 0; i < n; i++) {
            sequences[i].push_back(a[i]);
            for (int j = 0; j < i; j++) {
                if (a[i] != a[j] && d[i] < d[j] + 1) {
                    d[i] = d[j] + 1;
                    sequences[i] = sequences[j];
                    sequences[i].push_back(a[i]);
                }
            }
        }

        int ans = d[0];
        int best_end = 0;

        for (int i = 1; i < n; i++) {
            if (d[i] > ans) {
                ans = d[i];
                best_end = i;
            }
        }
        return sequences[best_end];
    }
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<int> x = longestBinarySubsequence(n, groups);
        vector<string> ans;
        int j = 0;
        for(int i = 0; i < n && j < x.size(); i++) {
            if(groups[i] == x[j]) {
                ans.emplace_back(words[i]);
                ++j;
            }
        }
        return ans;
    }
};