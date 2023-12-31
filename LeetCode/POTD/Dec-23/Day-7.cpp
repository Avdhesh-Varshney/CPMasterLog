// https://leetcode.com/problems/largest-odd-number-in-string/description/?envType=daily-question&envId=2023-12-07

class Solution {
public:
    string largestOddNumber(string num) {
        int left = num.length() - 1;
        while(left >= 0) {
            if((num[left] - '0')%2 != 0) break;
            --left;
        }
        return num.substr(0, left+1);
    }
};