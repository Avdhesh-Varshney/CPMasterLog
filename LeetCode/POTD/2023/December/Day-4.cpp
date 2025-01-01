// https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/?envType=daily-question&envId=2023-12-04

class Solution {
public:
    string largestGoodInteger(string num) {
        int left = 0, right = 1, n = num.length(), flag = 0;
        char nm = '0';
        while(right < n) {
            if(num[left] != num[right]) left = right;
            if(left+2 <= right) {
                flag = 1;
                nm = max(nm, num[left]);
            }
            ++right;
        }
        string ans = "";
        if(flag) ans += nm, ans += nm, ans += nm;
        return ans;
    }
};