// Problem Link - https://leetcode.com/contest/biweekly-contest-109/problems/sort-vowels-in-a-string/

class Solution {
public:
    bool checkVowel(char ch) {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string sortVowels(string s) {
        string t = "", v = "";
        for(auto &ch : s) {
            if(checkVowel(ch)) v += ch;
        }
        sort(v.begin(), v.end());
        int i = 0;
        for(auto &ch : s) {
            if(checkVowel(ch)) t += v[i++];
            else t += ch;
        }
        return t;
    }
};