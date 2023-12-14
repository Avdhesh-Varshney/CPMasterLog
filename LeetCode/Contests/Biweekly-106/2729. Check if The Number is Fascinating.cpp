// Problem Link - https://leetcode.com/contest/biweekly-contest-106/problems/check-if-the-number-is-fascinating/

class Solution {
public:
    bool checkZero(string& s) {
        for(auto &ch : s) if(ch == '0') return true;
        return false;
    }
    bool verifyCondition(string& s) {
        if(s.length() > 9) return false;
        unordered_map<char, int> m;
        for(auto &ch : s) m[ch]++;
        if(m.size() == 9) return true;
        return false;
    }
    bool isFascinating(int n) {
        string s = to_string(n);
        if(checkZero(s)) return false;
        int n1 = 2*n;
        int n2 = 3*n;
        string s1 = to_string(n1);
        string s2 = to_string(n2);
        s += s1;
        s += s2;
        return verifyCondition(s) && !checkZero(s);
    }
};