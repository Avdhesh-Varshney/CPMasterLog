// Problem Link - https://leetcode.com/contest/biweekly-contest-112/problems/check-if-strings-can-be-made-equal-with-operations-ii/

class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.length();
        priority_queue<char> e1, o1, e2, o2;
        for(int i = 1; i < n; i = i+2) {
            e1.push(s1[i]);
            e2.push(s2[i]);
        }
        if(e1.size() != e2.size()) return false;
        while(!e1.empty() || !e2.empty()) {
            if(e1.top() != e2.top()) return false;
            e1.pop();
            e2.pop();
        }
        for(int i = 0; i < n; i = i+2) {
            o1.push(s1[i]);
            o2.push(s2[i]);
        }
        if(o1.size() != o2.size()) return false;
        while(!o1.empty() || !o2.empty()) {
            if(o1.top() != o2.top()) return false;
            o1.pop();
            o2.pop();
        }
        return true;
    }
};