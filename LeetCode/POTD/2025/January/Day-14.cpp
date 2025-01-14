// Problem Link: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/

// Solution:
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(), maxFound = 0;
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(mp.find(A[i]) != mp.end()) ++maxFound;
            if(mp.find(B[i]) != mp.end()) ++maxFound;
            if(A[i] == B[i]) ++maxFound;
            mp[A[i]]++; mp[B[i]]++;
            ans.emplace_back(maxFound);
        }
        return ans;
    }
};