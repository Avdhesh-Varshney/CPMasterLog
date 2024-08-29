#include <bits/stdc++.h>
using namespace std;
#define ll long long

void factors(vector<ll> &v, int n) {
    for(int i = 1; i*i <= n; i++) {
        if(n%i == 0) {
            if(i*i == n) v.push_back(i);
            else {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }
}

void asquare() {
    ll n, x;
    cin >> n >> x;
    set<ll> s;
    ll a = n - x;
    vector<ll> v;
    factors(v, a);
    for(auto &i : v) if(i%2 == 0) s.insert((i+2)/2);

    a = n + x - 2;
    vector<ll> v1;
    factors(v1, a);
    for(auto &i : v1) if(i%2 == 0) s.insert((i+2)/2);
    ll count = 0;
    for(auto &i : s) if(i >= x) count++;
    cout << count << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) asquare();
    return 0;
}