// Problem Link:
// https://leetcode.com/problems/palindrome-number/description/

// Solution:
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        else {
            long int n = 0, a = x, rem = 0;
            while(a != 0) {
                rem = a%10;
                n = n*10 + rem;
                a /= 10;
            }
            if(n == x)
                return true;
            else
                return false;
        }
    }
};