// 18 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long solve(int n, vector<int>& A, int m) {
        vector<int> mp(2*n+1, 0);
        long long cur = n, tot = 0, ans = 0;
        mp[cur]++;
        for (int i = 0; i < n; i++) {
            int x = -1;
            if(A[i] >= m)
                x = 1;
            if(x == -1)
                tot -= mp[cur+x];
            else
                tot += mp[cur];
            cur += x;
            ans += tot;
            mp[cur]++;
        }
        return ans;
    }
    long long countSubarray(int N,vector<int> A,int M) {
        // code here
        return solve(N, A, M) - solve(N, A, M+1);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];
        Solution obj;
        int ans = obj.countSubarray(N, A, M);
        cout << ans << endl;
    }
    return 0;
}