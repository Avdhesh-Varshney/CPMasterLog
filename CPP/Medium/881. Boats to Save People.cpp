// Problem Link
// https://leetcode.com/problems/boats-to-save-people/

// Solution:
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int ans = 0, n = people.size(), st = 0, lt = n-1;
        while(st < lt) {
            if(people[lt]+people[st] == limit || people[st]+people[lt] <= limit) st++;
            ans++;
            lt--;
            if(st == lt) ans++;
        }
        return ans;
    }
};