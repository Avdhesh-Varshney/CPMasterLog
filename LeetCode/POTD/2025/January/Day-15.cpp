// Problem Link: https://leetcode.com/problems/minimize-xor/

// Solution:
class Solution {
public:
    int minimizeXor(int num1, int num2) {
        bitset<64> n1(num1), n2(num2);
        int cnt1 = n1.count(), cnt2 = n2.count();
        bitset<64> x;
        for(int i = 63; i >= 0; i--) {
            if(cnt2 > 0) {
                if(n1[i] == 1) {
                    x.set(i);
                    --cnt2;
                }
            } else break;
        }
        for(int i = 0; i < 64; i++) {
            if(cnt2 > 0) {
                if(x[i] == 0) {
                    x.set(i);
                    --cnt2;
                }
            } else break;
        }
        return x.to_ulong();
    }
};