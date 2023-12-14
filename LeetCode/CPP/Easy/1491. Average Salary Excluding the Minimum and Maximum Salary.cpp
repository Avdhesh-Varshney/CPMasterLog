// Problem Link
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

// Solution:
class Solution {
public:
    double average(vector<int>& salary) {
        double large = 0, small = INT_MAX, sum = 0;
        for(auto &i : salary) {
            if(i > large) large = i;
            if(i < small) small = i;
            sum += i;
        }
        return (sum-large-small)/(salary.size()-2);
    }
};