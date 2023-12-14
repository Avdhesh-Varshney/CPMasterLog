#include <bits/stdc++.h>
#define ll long long
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main() {
    ios;
    ll t;
    cin >> t;
    while(t--) {
        ll n, polycarp_strength, polycarp_endurance, weight, strength, endurance;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> strength >> endurance;
            if (i == 0) {
                polycarp_strength = strength;
                polycarp_endurance = endurance;
                weight = strength;
            } else {
                if(strength >= polycarp_strength and endurance >= polycarp_endurance) weight = -1;
            }
        }
        cout << weight << endl;
    }
    return 0;
}