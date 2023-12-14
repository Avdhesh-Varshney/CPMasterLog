// Problem Link - https://leetcode.com/contest/weekly-contest-347/problems/remove-trailing-zeros-from-a-string/

class Solution {
public:
    string removeTrailingZeros(string num) {
        string rev = num;
        reverse(rev.begin(), rev.end());
        bool flag = (rev[0] == '0') ? false : true;
        int i = 0;
        while(!flag) {
            if(rev[i++] != '0') {
                flag = true;
                break;
            }
        }
        --i;
        return num.substr(0, num.size()-i);
    }
};