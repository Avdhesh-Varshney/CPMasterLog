// 13 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        long long ans = 0;
        int cnt = 0, mini = INT_MAX;
        for(int i = 0; i < A.size(); i++) {
            if(B[i]/2) {
                ans += 2*(B[i]/2)*A[i];
                cnt += (B[i]/2);
                mini = min(mini, A[i]);
            }
        }
        if(cnt%2 == 1)
            ans -= (2*mini);
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];
        for(int i = 0; i < N; i++)
            cin >> B[i];
        Solution obj;
        int ans = obj.maxPossibleValue(N, A, B);
        cout << ans << endl;
    }
}