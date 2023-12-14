// Problem Link - https://leetcode.com/contest/biweekly-contest-103/problems/find-the-prefix-common-array-of-two-arrays/

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> c(A.size(), 0);
        vector<bool> freqa(A.size()+1, false), freqb(A.size()+1, false);
        
        if(A[0] == B[0]) c[0]++;
        freqa[A[0]] = true;
        freqb[B[0]] = true;
        
        for(int i = 1; i < A.size(); i++) {
            if(A[i] == B[i]) c[i] = c[i-1] + 1;
            else {
                if(freqb[A[i]]) {
                    c[i] = c[i-1] + 1;
                    if(freqa[B[i]]) c[i]++;
                }
                else if(freqa[B[i]]) {
                    c[i] = c[i-1] + 1;
                    if(freqb[A[i]]) c[i]++;
                }
                else c[i] = c[i-1];
            }
            freqa[A[i]] = true;
            freqb[B[i]] = true;
        }
        return c;
    }
};