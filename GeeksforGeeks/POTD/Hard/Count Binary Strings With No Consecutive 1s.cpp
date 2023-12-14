// 09 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    const long long M = 1000000007;
    map<long long, long long> F;
    long long fib(long long n) {
        if(F.count(n)) return F[n];
        long long k = n/2;
        if (n%2==0) return F[n] = (fib(k)*fib(k) + fib(k-1)*fib(k-1)) % M;
        else return F[n] = (fib(k)*fib(k+1) + fib(k-1)*fib(k)) % M;
    }
    int countStrings(long long int N) {
        // Code here
        if(N == 0) return 0;
        F[0] = F[1] = 1;
        return fib(N+1);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long N;
        cin >> N;
        Solution obj;
        cout << obj.countStrings(N) << endl;
    }
    return 0;
}