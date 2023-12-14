// Problem Link - https://leetcode.com/contest/weekly-contest-342/problems/sum-multiples/

class Solution {
public:
    int sumOfMultiples(int n) {
        int a = n/3, b = n/5, c = n/7;
        set<int> s;
        for(int i = 1; i <= a; i++) s.insert(3*i);
        for(int i = 1; i <= b; i++) s.insert(5*i);
        for(int i = 1; i <= c; i++) s.insert(7*i);
        int sum = 0;
        for(auto &i : s) sum += i;
        return sum;
    }
};