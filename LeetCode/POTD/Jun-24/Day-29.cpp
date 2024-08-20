// https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/description/?envType=daily-question&envId=2024-06-29

class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> edgesList;
        for(const auto& edge : edges) edgesList[edge[1]].push_back(edge[0]);

        vector<vector<int>> ans(n);
        for(int i = 0; i < n; i++) {
            unordered_set<int> set;
            if(edgesList.find(i) != edgesList.end()) {
                stack<int> stack;
                for(const auto& ancestor : edgesList[i]) stack.push(ancestor);

                while(!stack.empty()) {
                    int current_val = stack.top();
                    stack.pop();

                    if (set.find(current_val) == set.end()) {
                        set.insert(current_val);
                        if (edgesList.find(current_val) != edgesList.end()) {
                            for (const auto& ancestor : edgesList[current_val]) {
                                stack.push(ancestor);
                            }
                        }
                    }
                }

            }
            vector<int> current_list(set.begin(), set.end());
            sort(current_list.begin(), current_list.end());
            ans[i] = current_list;
        }
        return ans;
    }
};