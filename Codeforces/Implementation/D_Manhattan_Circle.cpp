#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, m, x = 0, y = 0;
  cin >> t;
  while(t--) {
    cin >> n >> m;
    char a[n][m];
    vector<int> count(n, 0);
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> a[i][j];
        if(a[i][j] == '#') ++count[i];
      }
    }
    int large = 0;
    for(int i = 0; i < n; i++) {
      if(count[i] > large) {
        large = count[i];
        x = i;
      }
    }
    y = (count[x]/2) + 1;
    int dots = 0;
    while(a[x][dots] == '.') { ++y; ++dots; }
    cout << x+1 << " " << y << endl;
  }
  return 0;
}