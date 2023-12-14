// Problem Link - https://leetcode.com/contest/weekly-contest-342/problems/calculate-delayed-arrival-time/

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime)%24;
    }
};