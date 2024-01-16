// Problem Link - https://leetcode.com/contest/biweekly-contest-114/problems/minimum-number-of-operations-to-make-array-empty/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto &i : nums) m[i]++;
        int ans = 0;
        for(auto &i : m) {
            cout << i.second << endl;
            if(i.second == 1) return -1;
            if(i.second%3 == 0) ans += (i.second/3);
            else if(i.second%2 == 0) {
                while(i.second > 4) {
                    i.second -= 6;
                    ans += 2;
                }
                ans += (i.second/2);
            }
            else {
                while(i.second > 4) {
                    i.second -= 3;
                    ++ans;
                }
                ans += (i.second/2);
            }
        }
        return ans;
    }
};