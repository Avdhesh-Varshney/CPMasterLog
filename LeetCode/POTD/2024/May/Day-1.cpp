// https://leetcode.com/problems/reverse-prefix-of-word/description/?envType=daily-question&envId=2024-05-01

class Solution {
public:
    string reversePrefix(string word, char ch) {
        reverse(word.begin(), word.begin()+word.find(ch)+1);
        return word;
    }
};