// https://leetcode.com/problems/three-consecutive-odds/description/?envType=daily-question&envId=2024-07-01

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt = 0;
        for(auto &i : arr) {
            if(i%2 == 0) cnt = 0;
            else ++cnt;
            if(cnt >= 3) return true;
        }
        return (cnt >= 3);
    }
};