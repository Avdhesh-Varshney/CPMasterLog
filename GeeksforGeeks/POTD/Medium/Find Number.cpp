// 29 April 2023

#include <bits/stdc++.h>
using namespace std;

#define ll long long
class Solution{
public:
    ll reverse(ll n) {
        ll rev = 0;
        while(n) {
            int digit = n % 10;
            rev = (rev * 10) + digit;
            n /= 10;
        }
        return rev;
    }
    long long findNumber(ll N){
        // Code here
        ll ans = 0;
        while(N) {
            ll rank = N % 5;
            N /= 5;
            if(rank == 0) {
                rank = 5;
                N--;
            }
            ans = (ans * 10) + (2 * rank - 1);
        }
        return reverse(ans);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.findNumber(N) << endl;
    }
    return 0;
}