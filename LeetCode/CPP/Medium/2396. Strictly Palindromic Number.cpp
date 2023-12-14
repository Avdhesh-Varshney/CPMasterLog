// Problem Link:
// https://leetcode.com/problems/strictly-palindromic-number/

// Solution:
class Solution {
public:
    string convert(int n, int base) {
        string ans;
        while(n != 0) {
            int carry = n%base;
            ans.push_back(carry);
            n /= base;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i = 2; i <= n-2; i++) {
            string str = convert(n, i);
            for(int i = 0; i < str.length()/2; i++)
                if(str[i] != str[str.length()-1-i])
                    return false;
        }
        return true;
    }
};