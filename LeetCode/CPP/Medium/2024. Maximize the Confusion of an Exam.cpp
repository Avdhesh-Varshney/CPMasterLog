// Problem Link
// https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

// Solution:
class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i = 0, j = 0, countF = 0, countT = 0, ans = 0;
        while(j < answerKey.length()) {
            char ch = answerKey[j];
            if(ch == 'T') countT++;
            else countF++;
            while(min(countT, countF) > k) {
                ch = answerKey[i];
                if(ch == 'T') countT--;
                else countF--;
                i++;
            }
            ans = max(ans, (j-i+1));
            j++;
        }
        return ans;
    }
};