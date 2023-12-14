// Problem Link
// https://leetcode.com/problems/string-compression/

// Solution:
class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 1)
            return 1;
        string str;
        int cnt = 1;
        str.push_back(chars[0]);
        for(int i = 1; i < chars.size(); i++) {
            if(chars[i] != chars[i-1]) {
                if(cnt > 1) {
                    string s = to_string(cnt);
                    str += s;
                }
                str.push_back(chars[i]);
                cnt = 1;
            }
            else
                cnt++;
        }
        if(cnt > 1) {
            string s = to_string(cnt);
            str += s;
        }
        chars = {};
        for(int i = 0; i < str.size(); i++)
            chars.push_back(str[i]);
        return str.length();
    }
};