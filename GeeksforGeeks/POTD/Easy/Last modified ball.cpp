// 9 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int N, vector<int> A) {
        // code here
        int flag = 0;
        for(int i = N-1; i >= 0; i--) {
            if(A[i] != 9) {
                flag = i+1;
                break;
            }
        }
        return flag;
    }
};

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for(int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.solve(N, A) << "\n";
    }
    return 0;
}
