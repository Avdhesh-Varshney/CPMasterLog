// Problem Link:
// https://leetcode.com/problems/maximum-69-number/

// Solution:
class Solution {
public:
    int maximum69Number (int num) {
        int flag = 1;
        string s, temp = to_string(num);
        for(int i = 0; i < temp.length(); i++) {
            if(temp[i] == '6' and flag == 1) {
                flag = 0;
                s.push_back('9');
            }
            else
                s.push_back(temp[i]);
        }
        return stoi(s);
    }
};