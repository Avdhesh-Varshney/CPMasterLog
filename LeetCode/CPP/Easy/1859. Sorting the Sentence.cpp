// Problem Link
// https://leetcode.com/problems/sorting-the-sentence/

// Solution:
class Solution {
public:
    string sortSentence(string s) {
        string str = "", temp = "";
        vector<string> v(9);
        int count = 0, index;
        for(int i = 0; i < s.length(); i++) {
            temp.push_back(s[i]);
            if(i+2 == s.length() or s[i+2] == ' ') {
                index = s[i+1] - '1';
                v[index] = temp;
                temp = "";
                count++;
                i += 2;
            }
        }
        for(int i = 0; i < count; i++) {
            string ans = v[i];
            str += ans + (i+1 == count ? "" : " ");
        }
        return str;
    }
};