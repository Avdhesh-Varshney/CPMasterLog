// Problem Link
// https://leetcode.com/problems/similar-string-groups/

// Solution:
class disjoint_set {
    vector<int> v;
    int sz;
public:
    disjoint_set(int n) {
        makeset(n);
    }

    void makeset(int n) {
        v.resize(n);
        iota(v.begin(), v.end(), 0);
        sz = n;
    }

    int find(int i) {
        if (i != v[i])
            v[i] = find(v[i]);
        return v[i];
    }
    
    void join(int i, int j) {
        int ri = find(i), rj = find(j);
        if (ri != rj) {
            v[ri] = rj;
            sz--;
        }
    }
    
    int size() {
        return sz;
    }
};
class Solution {
public:
    bool similar(string &a, string &b) {
        int n = 0;
        for (int i = 0; i < a.size(); i++)
            if (a[i] != b[i] && ++n > 2)
                return false;
        return true;
    }
    int numSimilarGroups(vector<string>& strs) {
        disjoint_set ds(strs.size());
        for (int i = 0; i < strs.size(); i++)
            for (int j = i + 1; j < strs.size(); j++)
                if (similar(strs[i], strs[j]))
                    ds.join(i, j);
        return ds.size();
    }
};