// https://leetcode.com/problems/count-nice-pairs-in-an-array/description/?envType=daily-question&envId=2023-11-21

class Solution {
public:
    unordered_map<int, long long> f;
    const int mod = 1e9 + 7;
    int reverse(int x) {
        int num = 0;
        while(x > 0) {
            num = num*10 + x%10;
            x /= 10;
        }
        return num;
    }
    int comb2(int& cnt) {
        return (( (cnt-1) *1ll *cnt) /2) %mod;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> rev, m;
        for(auto &i : nums) {
            if(rev[i] <= 0) rev[i] = reverse(i);
            m[i - rev[i]]++;
        }
        int ans = 0;
        for(auto &i : m) if(i.second > 1) ans = (ans + comb2(i.second))%mod;
        return ans;
    }
};