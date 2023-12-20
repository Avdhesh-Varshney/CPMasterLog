#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> power(31, 1);
vector<ll> rightSmaller(vector<ll> &arr) {
    ll n = arr.size();
    stack<int> s;
    vector<ll> ans(n, n + 4);
    for(int i = 0; i < n; i++) {
        int next = arr[i];
        while(!s.empty() && arr[s.top()] > next) {
            ans[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    return ans;
}
void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<ll> x(q);
    for(int i = 0; i < q; i++) {
        cin >> x[i];
        if(mp.find(x[i]) == mp.end()) mp[x[i]] = i;
    }
    vector<ll> smaller = rightSmaller(x);
    for(int i = 0; i < n; i++) {
        ll c = arr[i];
        ll d = q + 2;
        for(ll j = 1; j <= 30; j++)
            if((mp.find(j) != mp.end()) && (c % power[j] == 0)) d = min(d, mp[j]);
        while(d < q) {
            c += power[x[d] - 1];
            d = smaller[d];
        }
        cout << c << " ";
    }
    cout << "\n";
}
int main() {
    ll t;
    cin >> t;
    for (ll i = 1; i <= 30; i++) power[i] = power[i - 1] * 2;
    while (t--) solve();
    return 0;
}