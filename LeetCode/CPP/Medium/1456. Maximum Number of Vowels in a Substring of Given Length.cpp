// Problem Link
// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

// Solution:
class Solution {
public:
    bool checkVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int ans = 0, j = 0;
        for(int i = 0; i < k; i++) if(checkVowel(s[i])) ans++;
        int last = ans;
        for(int j = 0; j+k < s.length(); j++) {
            int temp = last;
            if(checkVowel(s[j]) && !checkVowel(s[k+j])) temp--;
            else if(!checkVowel(s[j]) && checkVowel(s[k+j])) temp++;
            last = temp;
            ans = max(ans, last);
        }
        return ans;
    }
};