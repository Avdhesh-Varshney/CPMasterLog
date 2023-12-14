// Problem Link
// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

// Solution:
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int large = 0;
        for(int i = 0; i < sentences.size(); i++) {
            int count = 1;
            for(int j = 0; j < sentences[i].size(); j++) {
                if(sentences[i][j] == ' ')
                    count++;
            }
            if(count > large)
                large = count;
        }
        return large;
    }
};