// 14 June 2024

class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int sum = 0, temp = n;
        while(temp > 0) {
            int rem = temp%10;
            sum += pow(rem, 3);
            temp /= 10;
        }
        return (sum == n)? "true": "false";
    }
};