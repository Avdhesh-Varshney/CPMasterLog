// https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/description/?envType=daily-question&envId=2023-11-04

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxTime = 0;
        for(auto &i : left) maxTime = max(maxTime, abs(n-i));
        for(auto &i : right) maxTime = max(maxTime, abs(n-i));
        return maxTime;
    }
};