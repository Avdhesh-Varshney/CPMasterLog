// https://leetcode.com/problems/destination-city/description/?envType=daily-question&envId=2023-12-15

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> source, p;
        for(auto &path : paths) {
            source.insert(path[0]);
            p.insert(path[0]);
            p.insert(path[1]);
        }
        for(auto &i : p) if(source.find(i) == source.end()) return i;
        return "";
    }
};