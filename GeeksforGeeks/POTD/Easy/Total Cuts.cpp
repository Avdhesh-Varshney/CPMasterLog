// 10 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        int count = 0, mn[N], mx[N];
        mx[0] = A[0];
        for(int i = 1; i < N; i++) mx[i] = max(mx[i-1], A[i]);
        mn[N-1] = A[N-1];
        for(int i = N-2; i >= 0; i--) mn[i] = min(mn[i+1], A[i]);
        for(int i = 0; i < N-1; i++) if(mx[i]+mn[i+1] >= K) count++;
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.totalCuts(N, K, A) << endl;
    }
    return 0;
}