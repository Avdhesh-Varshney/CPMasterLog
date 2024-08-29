#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;
  
  while (t--) {    
    int n, k;
    cin >> n >> k;
    vector <int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    map<int, int> frq;
    for (int i = 1; i <= n; i++) frq[v[i] % k]++;
    int cnt = 0;
    for (auto x : frq) if (x.second % 2 == 1) cnt++;
    if (cnt > 1) {
      cout << -1 << '\n';
      continue;
    }

    vector<pair<int, int> > vals(n);
    for (int i = 1; i <= n; i++) {
      vals[i-1] = {v[i] % k, v[i]};
    }
    
    sort (vals.begin(), vals.end());
    vector<int> vp;
    long long total = 0;
    for (int i = 1; i < n; i++) {
      if (vals[i].first == vals[i-1].first && frq[vals[i].first] % 2 == 0) {
        total += (vals[i].second - vals[i-1].second) / k;
        i++;
      }
    }
    
    for (int i = 0; i < n; i++) {
      if (frq[v[i+1] % k] % 2 == 1) {
        vp.push_back(v[i+1]);
      }
    }
    sort(vp.begin(), vp.end());
    
    if(vp.size()) {
      long long minix = (1LL<<60);
      vector<long long> suff(vp.size());
      for (int i = (int) vp.size() - 2; i >= 0; i--) {
        if (i == vp.size() - 2) {
          suff[i] = vp[i+1] - vp[i];
        }
        else {
          suff[i] = suff[i+2] + vp[i+1] - vp[i];
        }
      }
      
      vector<long long> pref(vp.size());
      for (int i = 1; i < (int) vp.size(); i++) {
        if (i >= 2)
          pref[i] = pref[i-2] + vp[i] - vp[i-1];
        else 
          pref[i] = vp[i] - vp[i-1];
      }
      
      for (int rmv = 0; rmv < vp.size(); rmv++) {
        if (rmv % 2 == 0) {
          long long val = 0;
          if (rmv > 0) {
            val = pref[rmv-1];
          }
          if (rmv + 1 < vp.size()) {
            val += suff[rmv + 1];
          }
          minix = min(minix, val);
        }
        else {
          long long val = 0;
          if (vp.size() >= 3) {
            val = vp[rmv+1] - vp[rmv-1];
          }
          if (rmv > 1) {
            val += pref[rmv-2];
          }
          if (rmv + 2 < vp.size()) {
            val += suff[rmv + 2];
          }
          minix = min(minix, val);
        }
      }
      total += minix/k;
    }
    cout << total << '\n';
  }
  
  return 0;
}