// Problem Link - https://leetcode.com/contest/biweekly-contest-104/problems/number-of-senior-citizens/

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(auto &s : details) {
            char ch1 = s[11], ch2 = s[12];
            int a = ch1 - '0', b = ch2 - '0';
            int age = a*10 + b;
            if(age > 60) ans++;
        }
        return ans;
    }
};