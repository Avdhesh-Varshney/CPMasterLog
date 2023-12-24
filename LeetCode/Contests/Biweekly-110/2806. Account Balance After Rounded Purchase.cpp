// Problem Link - https://leetcode.com/contest/biweekly-contest-110/problems/account-balance-after-rounded-purchase/

class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        int r = p%10, q = p/10;
        if(r >= 5) return 100 - (q+1)*10;
        return 100 - q*10;
    }
};