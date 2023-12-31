// https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/description/?envType=daily-question&envId=2023-12-24

class Solution {
public:
    int minOperations(string s) {
        int cnt1 = solve(s, '0', '1'), cnt2 = solve(s, '1', '0');
        return (cnt1 > cnt2) ? cnt2 : cnt1;
    }
    int solve(string s, char x, char y) {
        int cnt = 0;
        for(int i = s.length()-1; i >= 0; i--)
            if((i%2 == 0 && s[i] != x) || (i%2 != 0 && s[i] != y)) ++cnt;
        return cnt;
    }
};