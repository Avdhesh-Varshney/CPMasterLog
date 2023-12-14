// Problem Link
// https://leetcode.com/problems/detect-capital/description/

// Solution:
class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap = 0, low = 0;
        for(int i = 0; i < word.length(); i++) {
            if(word[i] > 96)
                low++;
            else
                cap++;
        }
        if(cap == word.length() or low == word.length())
            return true;
        else if(cap == 1 and word[0] < 96 and low == word.length()-1)
            return true;
        return false;
    }
};