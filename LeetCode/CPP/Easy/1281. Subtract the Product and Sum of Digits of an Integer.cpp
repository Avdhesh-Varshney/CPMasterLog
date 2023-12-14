// Problem Link:
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

// Solution:
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, prod = 1;
        while(n > 0) {
            sum += n%10;
            prod = prod*(n%10);
            n /= 10;
        }
        return prod-sum;
    }
};