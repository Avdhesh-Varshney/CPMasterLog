// 01 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int minOperations(int N) {
        // Code here
        if(N%2 == 1)
            return (N/2)*1LL*(N/2+1);
        return (N*1LL*N)/4;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minOperations(n) << endl;
    }
    return 0;
}