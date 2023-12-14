// 06 May 2023

#include <bits/stdc++.h>
using namespace std;

class Array {
    public:
    template<class T>
    static void input(vector<T> &A, int n) {
        for(int i = 0; i < n; i++)
            scanf("%d", &A[i]);
    }

    template <class T>
    static void print(vector<T> &A) {
        for(int i = 0;  i < A.size(); i++)
            cout << A[i] << " ";
        cout << endl;
    }
};

class Solution {
    public:
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        sort(coins.begin(), coins.end());
        bool dp[2][target+1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        for(int p = 1; p <= K; p++) {
            for(int i = 0; i <= target; i++) dp[p%2][i] = 0;
            for(int i = 1; i <= target; i++)
                for(int j = 0; j < N && coins[j] <= i; j++)
                    dp[p%2][i] |= dp[(p+1)%2][i-coins[j]];
        }
        return dp[K%2][target];
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, K;
        cin >> N >> K;
        int target;
        cin >> target;
        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);
        cout << res << endl;
    }
    return 0;
}