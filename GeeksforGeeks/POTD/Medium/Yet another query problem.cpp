// 11 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
        vector<int> sf(N, 0);
        sf[N-1] = 1;
        for(int i = N-2; i >= 0; i--) {
            int x = A[i];
            for(int j = N-1; j >= i; j--)
                if(A[j] == x)
                    sf[i]++;
        }
        vector<int> ans;
        for(auto &vtr : Q) {
            int cnt = 0;
            for(int i = vtr[0]; i <= vtr[1]; i++)
                if(sf[i] == vtr[2])
                    cnt++;
            ans.emplace_back(cnt);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        int num;
        cin >> num;
        vector<int> A(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i = 0; i < num; i++)
            for(int j = 0; j < 3; j++)
                cin >> Q[i][j];
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        for(auto ele: res)
            cout << ele << " ";
        cout << endl;
    }
    return 0;
}