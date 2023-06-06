// Question 3

// Problem Link
// https://leetcode.com/problems/letter-case-permutation/?envType=study-plan&envId=algorithm-i&plan=algorithm

// Solution:
class Solution {
public:
    void backtracking(string& s, int i, vector<string>& res) {
        if(i == s.size()) {
            res.emplace_back(s);
            return;
        }
        backtracking(s, i+1, res);
        if(isalpha(s[i])) {
            s[i] ^= (1 << 5);
            backtracking(s, i+1, res);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        backtracking(s, 0, res);
        return res;
    }
};