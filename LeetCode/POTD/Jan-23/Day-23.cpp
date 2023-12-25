// https://leetcode.com/problems/find-the-town-judge/description/?envType=daily-question&envId=2023-01-23

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1)
            return 1;
        map<int, int> mp1, mp2;
        for(int i = 0; i < trust.size(); i++) {
            mp1[trust[i][0]]++;
            mp2[trust[i][1]]++;
        }
        for(int i = 1; i <= n; i++) {
            if(mp1.find(i) == mp1.end() && mp2.find(i) != mp2.end() && mp2[i] == n-1)
                return i;
        }
        return -1;
    }
};