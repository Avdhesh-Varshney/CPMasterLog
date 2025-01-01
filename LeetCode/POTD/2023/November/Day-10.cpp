// https://leetcode.com/problems/restore-the-array-from-adjacent-pairs/description/?envType=daily-question&envId=2023-11-10

class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int> ans;
        unordered_map<int, queue<int>> uv;
        for(auto &i : adjacentPairs) {
            uv[i[0]].push(i[1]);
            uv[i[1]].push(i[0]);
        }
        for(auto &i : uv) {
            if(i.second.size() == 1) {
                ans.emplace_back(i.first);
                ans.emplace_back(i.second.front());
                i.second.pop();
                break;
            }
        }
        while(ans.size() < adjacentPairs.size()+1) {
            auto tail = ans.back(), prev = ans[ans.size() - 2];
            auto &next = uv[tail];
            if(next.front() != prev) {
                ans.emplace_back(next.front());
                next.pop();
            } else {
                next.pop();
                ans.emplace_back(next.front());
            }
        }
        return ans;
    }
};