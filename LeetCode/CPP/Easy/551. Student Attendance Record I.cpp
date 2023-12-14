// Problem Link
// https://leetcode.com/problems/student-attendance-record-i/

// Solution:
class Solution {
public:
    bool checkRecord(string s) {
        int count = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'A')
                count++;
            else if(s[i] == 'L' and i+2 < s.length()) {
                if(s[i+1] == 'L' and s[i+2] == 'L')
                    return false;
            }
        }
        if(count >= 2)
            return false;
        return true;
    }
};