// 15 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long countBits(long long N) {
        // code here
        long long ans = 0;
        for(int i = 0; i<= N; i++) ans += __builtin_popcount(i);
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long N;
        cin >> N;
        Solution obj;
        cout << obj.countBits(N) << endl;
    }
    return 0;
}