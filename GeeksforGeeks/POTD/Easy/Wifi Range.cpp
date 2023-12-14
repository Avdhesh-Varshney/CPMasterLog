// 19 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        int t = 0;
        for(int i = 0; i < N; i++) {
            if(S[i] == '1') {
                if(X >= abs(t)) t = X;
                else return 0;
            }
            else
                t--;
        }
        if(t < 0) return 0;
        return 1;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << endl;
    }
    return 0;
}