// https://leetcode.com/problems/calculate-money-in-leetcode-bank/description/?envType=daily-question&envId=2023-12-06

class Solution {
public:
    int totalMoney(int n) {
        int money = 0, week = 0;
        while(n > 7) {
            money += (((7+week)+1)*1ll*(7+week))/2 - ((week+1)*1ll*week)/2;
            n -= 7;
            ++week;
        }
        return money + (((n+week)+1)*1ll*(n+week))/2 - ((week+1)*1ll*week)/2;
    }
};