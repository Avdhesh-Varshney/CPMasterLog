// Problem Link
// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/

// Solution:
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> m;
        for(int i = 0; i < tasks.size(); i++)
            m[tasks[i]]++;
        for(auto i = m.begin(); i != m.end(); i++)
            if(i->second == 1)
                return -1;
        int round = 0;
        for(auto i = m.begin(); i != m.end(); i++) {
            if(i->second % 3 == 0)
                round += (i->second)/3;
            else
                round += (i->second)/3 + 1;
        }
        return round;
    }
};