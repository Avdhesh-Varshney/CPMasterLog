// Problem Link: https://leetcode.com/problems/count-vowel-strings-in-ranges

// Solution:
class Solution {
    unordered_set<char> v{'a', 'e', 'i', 'o', 'u'};
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        // Getting the prefix sum of correspond to any index.
        vector<int> prefixSum(words.size(), 0);
        int sum = 0;
        for(int i = 0; i < words.size(); i++) {
            string s = words[i];
            if(v.count(s[0]) && v.count(s[s.length()-1])) ++sum;
            prefixSum[i] = sum;
        }

        // Now, just storing the answer correspond to range of index.
        // [i, j] means ans = j-i;
        vector<int> ans(queries.size());
        for(int i = 0; i < queries.size(); i++) {
            auto q = queries[i];
            ans[i] = prefixSum[q[1]] - (q[0] == 0? 0: prefixSum[q[0]-1]);
        }
        return ans;
    }
};