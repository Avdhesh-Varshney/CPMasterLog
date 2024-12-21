// Problem Link:
// https://leetcode.com/problems/maximum-number-of-k-divisible-components/description

// Solution:
class Solution {
    int dfs(vector<vector<int>>& adj, vector<int>& val, int& k, int& cnt, int id, int parent=-1) {
        long long sum = val[id];
        for(auto &nbr: adj[id]) if(nbr != parent) sum += dfs(adj, val, k, cnt, nbr, id);
        sum %= k;
        if(sum == 0) ++cnt;
        return sum;
    }
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<vector<int>> adj(n);
        for(auto &edge: edges) {
            adj[edge[0]].emplace_back(edge[1]);
            adj[edge[1]].emplace_back(edge[0]);
        }
        int cnt = 0;
        dfs(adj, values, k, cnt, 0);
        return cnt;
    }
};