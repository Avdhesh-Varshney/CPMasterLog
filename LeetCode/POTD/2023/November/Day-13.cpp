// https://leetcode.com/problems/sort-vowels-in-a-string/description/?envType=daily-question&envId=2023-11-13

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