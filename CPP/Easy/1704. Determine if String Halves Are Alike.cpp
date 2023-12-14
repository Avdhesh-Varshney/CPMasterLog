// Problem Link
// https://leetcode.com/problems/determine-if-string-halves-are-alike/

// Solution:
class Solution {
public:
    bool checkV(char ch) {
        return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U');
    }
    bool halvesAreAlike(string s) {
        int count1 = 0, count2 = 0;
        for(int i = 0; i < s.length(); i++) {
            if(i < s.length()/2 and checkV(s[i]))
                count1++;
            if(i >= s.length()/2 and checkV(s[i]))
                count2++;
        }
        if(count1 == count2)
            return true;
        return false;
    }
};