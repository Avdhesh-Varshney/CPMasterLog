// Problem Link:
// https://leetcode.com/problems/plus-one/description/

// Solution:
class Solution {
public:
    bool check(vector<int> &digits) {
        for(int i = 0; i < digits.size(); i++) {
            if(digits[i] != 9)
                return false;
        }
        return true;
    }
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1] == 9) {
            if(check(digits)) {
                vector<int> v(digits.size() + 1, 0);
                v[0] = 1;
                return v;
            }
            else {
                while(digits[n-1] == 9) {
                    digits[n-1] = 0;
                    n--;
                }
                digits[n-1] += 1;
                return digits;
            }
        }
        else {
            digits[n-1] += 1;
            return digits;
        }
    }
};