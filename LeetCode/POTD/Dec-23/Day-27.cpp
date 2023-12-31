// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/?envType=daily-question&envId=2023-12-27

class Solution {
public:
    void timeNeeded(vector<int>& neededTime, int& left, int& right, int& time) {
        int temp = INT_MIN;
        while(right >= left) {
            temp = max(temp, neededTime[left]);
            time += neededTime[left++];
        }
        time -= temp;
    }
    int minCost(string colors, vector<int>& neededTime) {
        int left = 0, right = 0, time = 0;
        for(int i = 0; i < colors.size(); i++) {
            if(colors[i] != colors[left]) {
                if(right > left) timeNeeded(neededTime, left, right, time);
                left = right = i;
            } else right = i;
        }
        if(right > left) timeNeeded(neededTime, left, right, time);
        return time;
    }
};