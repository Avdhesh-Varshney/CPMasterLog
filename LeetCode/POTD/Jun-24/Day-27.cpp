// https://leetcode.com/problems/find-center-of-star-graph/description/?envType=daily-question&envId=2024-06-27

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> m;
        for(auto &i : edges) {
            m[i[0]]++;
            m[i[1]]++;
        }
        int n = edges.size();
        for(auto &i : m) if(i.second == n) return i.first;
        return -1;
    }
};