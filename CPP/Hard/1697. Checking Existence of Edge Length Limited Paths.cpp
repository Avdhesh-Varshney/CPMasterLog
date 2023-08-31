// Problem Link
// https://leetcode.com/problems/checking-existence-of-edge-length-limited-paths/

// Solution:
class DisjointSet{
    vector<int> parent, size;
public:
    DisjointSet(int n) {
        parent.resize(n);
        size.resize(n, 1);
        iota(parent.begin(), parent.end(), 0);
    }
    
    int findParent(int x) {
        return x == parent[x] ? x : parent[x] = findParent(parent[x]);
    }
    
    void unionBySize(int x, int y) {
        x = findParent(x);
        y = findParent(y);
        if(x == y) return;
        if(size[x] >= size[y]) {
            parent[y] = x;
            size[x] += size[y];
        } else {
            size[y] += size[x];
            parent[x] = y;
        }
    }
    
    bool belongToSameParent(int x, int y) {
        return findParent(x) == findParent(y);
    }
};

class Solution {
    bool static comp(const vector<int> &a, const vector<int> &b) {
        return a[2] < b[2];
    }
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        int m = edgeList.size(), k = queries.size();
        for(int i = 0; i < k; i++) queries[i].emplace_back(i);
        sort(queries.begin(), queries.end(), comp);
        sort(edgeList.begin(), edgeList.end(), comp);
        
        int index = 0;
        DisjointSet dS(n);
        vector<bool> ans(k);
        for(int i = 0; i < k; i++) {
            int limit = queries[i][2], queryIndex = queries[i][3];
            while(index < m && edgeList[index][2] < limit)
                dS.unionBySize(edgeList[index][0], edgeList[index++][1]);
            ans[queryIndex] = dS.belongToSameParent(queries[i][0], queries[i][1]);
        }
        return ans;
    }
};