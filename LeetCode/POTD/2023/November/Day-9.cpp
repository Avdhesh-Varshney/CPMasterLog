// https://leetcode.com/problems/count-number-of-homogenous-substrings/description/?envType=daily-question&envId=2023-11-09

#define mod 1000000007
class Solution {
public:
    int countHomogenous(string s) {
        int n = s.length(), ans = 0, st = 0;
        for(int i = 1; i < n; i++) {
            if(s[st] != s[i]) {
                ans = (ans + ( ( (i-st) * 1ll * (i-st+1) )/2 )%mod )%mod;
                st = i;
            }
        }
        ans = (ans + ( ( (n-st) * 1ll * (n-st+1) )/2 )%mod )%mod;
        return ans;
    }
};