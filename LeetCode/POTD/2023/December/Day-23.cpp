// https://leetcode.com/problems/path-crossing/description/?envType=daily-question&envId=2023-12-23

class Solution {
public:
    bool isPathCrossing(string path) {
        map<vector<int>, int> m;
        vector<int> temp = {0, 0};
        for(auto &ch : path) {
            m[temp]++;
            if(ch == 'N') temp[1]++;
            else if(ch == 'E') temp[0]++;
            else if(ch == 'W') temp[0]--;
            else temp[1]--;
            if(m[temp] > 0) return true;
        }
        return false;
    }
};