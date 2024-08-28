#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  string ss, sq;
  cin >> t;
  while(t--) {
    cin >> ss >> sq;
    int ans = ss.size() + sq.size();
    for(int st = 0; st < sq.size(); st++) {
      int pt = st;
      for(int i = 0; i < ss.size(); i++) if(pt < sq.size() && ss[i] == sq[pt]) pt++;
      ans = min(ans, (int)ss.size() + (int)sq.size() - (pt - st));
    }
    cout << ans << endl;
  }
  return 0;
}