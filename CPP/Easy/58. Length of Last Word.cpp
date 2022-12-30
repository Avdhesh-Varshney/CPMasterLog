// Problem Link:
// https://leetcode.com/problems/length-of-last-word/description/

// Solution:
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = 0, i = 0;
        while(s[i] != '\0') {
            n++;
            i++;
        }
        int count = 0, flag = 0;
        for(int i = n-1; i >= 0; i--) {
            if(s[i] != ' ') {
                count++;
                flag = 1;
            }
            else if(flag == 1 and s[i] == ' ')
                break;
        }
        return count;
    }
};