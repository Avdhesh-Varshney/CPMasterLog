// Problem Link
// https://leetcode.com/problems/reverse-vowels-of-a-string/

// Solution:
class Solution {
public:
    string reverseVowels(string s) {
        string ans;
        vector<bool> v(s.length(), false);
        vector<char> ch;
        int j = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U') {
                v[i] = true;
                ch.push_back(s[i]);
            }
        }
        reverse(ch.begin(), ch.end());
        for(int i = 0; i < s.length(); i++) {
            if(v[i]) {
                ans.push_back(ch[j]);
                j++;
            }
            else
                ans.push_back(s[i]);
        }
        return ans;
    }
};