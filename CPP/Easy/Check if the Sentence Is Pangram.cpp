// Problem Link:
// https://leetcode.com/problems/check-if-the-sentence-is-pangram/

// Solution:
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length() < 26)
            return false;
        vector<bool> v(26, false);
        for(int i = 0; i < sentence.length(); i++) {
            for(int j = 0; j < 26; j++) {
                char ch = 97+j;
                if(sentence[i] == ch)
                    v[j] = true;
            }
        }
        for(auto i : v) {
            if(!i)
                return false;
        }
        return true;
    }
};