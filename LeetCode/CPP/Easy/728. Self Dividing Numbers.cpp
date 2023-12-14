// Problem Link:
// https://leetcode.com/problems/self-dividing-numbers/

// Solution:
class Solution {
public:
    bool check(int n) {
        int m = n;
        while(m > 0) {
            int rem = m%10;
            if(rem == 0 || n%rem != 0)
                return false;
            m /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i = left; i <= right; i++)
            if(check(i))
                v.push_back(i);
        return v;
    }
};