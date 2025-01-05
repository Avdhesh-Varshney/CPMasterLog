// Problem Link: https://leetcode.com/problems/shifting-letters-ii/

// Solution:
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> v(s.length(), 0);
        for(auto &shift: shifts) {
            if(shift[2]) {
                v[shift[0]]++;
                if(shift[1]+1 < s.length()) v[shift[1]+1]--;
            } else {
                v[shift[0]]--;
                if(shift[1]+1 < s.length()) v[shift[1]+1]++;
            }
        }
        int numShifts = 0;
        for(int i = 0; i < s.length(); i++) {
            numShifts = (numShifts + v[i]) % 26;
            if(numShifts < 0) numShifts += 26;
            s[i] = 'a' + (s[i] - 'a' + numShifts)%26;
        }
        return s;
    }
};