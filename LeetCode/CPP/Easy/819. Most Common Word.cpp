// Problem Link
// https://leetcode.com/problems/most-common-word/

// Solution:
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
        map<string, int> m;
        string tmp;
        for(auto &ch : paragraph) {
            if(ispunct(ch)) ch = ' ';
            if(ch == ' ') {
                if(tmp != "" && find(banned.begin(), banned.end(), tmp) == banned.end())
                    m[tmp]++;
                tmp = "";
            }
            else if(ch != ' ') tmp.push_back(ch);
        }
        if(tmp != "" && find(banned.begin(), banned.end(), tmp) == banned.end()) {
            m[tmp]++;
            tmp = "";
        }
        int large = 0;
        for(auto &it : m) {
            if(large < it.second) {
                large = it.second;
                tmp = it.first;
            }
        }
        return tmp;
    }
};