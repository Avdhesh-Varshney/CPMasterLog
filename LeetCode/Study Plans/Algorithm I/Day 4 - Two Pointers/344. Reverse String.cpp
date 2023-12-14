// Question 1

// Problem Link
// https://leetcode.com/problems/reverse-string/

// Solution:

// Way :- 1
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0; i < s.size()/2; i++) {
            char ch = s[i];
            s[i] = s[s.size()-1-i];
            s[s.size()-1-i] = ch;
        }
    }
};

// Way :- 2
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(!s.empty()) {
            int l = 0, r = s.size() - 1;
            while(l < r) {
                char aux = s[l];
                s[l] = s[r];
                s[r] = aux;
                l++; r--;
            }
        }
    }
};