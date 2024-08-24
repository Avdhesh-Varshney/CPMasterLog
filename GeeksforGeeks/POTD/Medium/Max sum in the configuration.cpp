// 06 June 2024

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
        long long sum = 0, ans = 0;
        for(long long i = 0; i < n; i++) {
            sum += a[i];
            ans += i*a[i];
        }
        long long cur = ans;
        for(long long i = 1; i < n; i++) {
            cur = cur - (sum-a[i-1]) + (a[i-1]*1ll*(n-1));
            ans = max(ans, cur);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.max_sum(a, n) << endl;
    }
    return 0;
}