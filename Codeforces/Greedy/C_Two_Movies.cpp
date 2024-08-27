#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int v1 = 0, v2 = 0, x = 0, y = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] > b[i]) v1 += a[i];
      else if(a[i] < b[i]) v2 += b[i];
      else if(a[i] == 1) x++;
      else if(a[i] == -1) y++;
    }
    while(x--) {
      if(v1 < v2) v1++;
      else v2++;
    }
    while(y--) {
      if(v1 > v2) v1--;
      else v2--;
    }
    cout << min(v1, v2) << endl;
  }
  return 0;
}