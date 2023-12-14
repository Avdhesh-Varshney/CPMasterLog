// Problem Link - https://leetcode.com/contest/weekly-contest-341/problems/minimum-additions-to-make-valid-string/

class Solution {
public:
    int addMinimum(string word) {
        int ans = 0;
        for(int i = 0; i < word.length(); i++) {
            if(word[i] == word[i+1]) ans += 2;
            else if(word[i] == 'a' && word[i+1] == 'c') ans++;
            else if(word[i] == 'b' && word[i+1] == 'a') ans++;
            else if(word[i] == 'c' && word[i+1] == 'b') ans++;
        }
        if(word[0] == 'b') ans++;
        else if(word[0] == 'c') ans += 2;
        if(word[word.length()-1] == 'a') ans += 2;
        else if(word[word.length()-1] == 'b') ans++;
        return ans;
    }
};