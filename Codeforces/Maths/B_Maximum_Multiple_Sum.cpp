#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sumOfSeries(int n, int& initial) {
  ll last = n*1ll*initial;
  return (n *1ll* (initial + last))/2;
}

int main() {
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    ll ans = 2, large = 0;
    for(int i = 2; i <= n; i++) {
      ll temp = sumOfSeries(n/i, i);
      if(temp > large) {
        large = temp;
        ans = i;
      }
    }
    cout << ans << endl;
  }
  return 0;
}