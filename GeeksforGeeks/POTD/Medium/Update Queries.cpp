// 1 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> updateQuery(int N,int Q,vector<vector<int>> &U)
        {
            // code here
            unordered_map<int, vector<int>> mp;
            for(auto x : U) {
                mp[x[0]-1].push_back(x[2]);
                mp[x[1]].push_back(-x[2]);
            }
            vector<int> ans(N, 0);
            map<int, int> temp;
            for(int i = 0; i < N; i++) {
                if(mp.find(i) != mp.end()) {
                    for(auto x : mp[i]) {
                        if(x < 0)
                            temp[-x]--;
                        else
                            temp[x]++;
                    }
                }
                int res = 0;
                for(auto x : temp) {
                    if(x.second > 0)
                        res = res | x.first;
                }
                ans[i] = res;
            }
            return ans;
        }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector< vector<int>> u(q, vector<int>(3));
        for(int i = 0; i < q; i++)
            cin >> u[i][0] >> u[i][1] >> u[i][2];
        Solution a;
        vector<int> ans = a.updateQuery(n, q, u);
        for(auto j : ans)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}