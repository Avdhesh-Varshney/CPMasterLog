// 26 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        unordered_map<int, int> vis;
        for(int i = 0; i < N; i++) {
            int x = frogs[i];
            if(vis[x] == 0) {
                int j = x;
                while(j <= leaves) {
                    vis[j]++;
                    j += x;
                }
            }
        }
        int cnt = 0;
        for(int i = 1; i <= leaves; i++)
            if(vis[i] == 0)
                cnt++;
        return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for(int i = 0; i < N; i++)
            cin >> frogs[i];
        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
    return 0;
}