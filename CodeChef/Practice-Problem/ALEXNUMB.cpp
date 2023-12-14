// Magic Pairs
// Problem Code - ALEXNUMB

// https://www.codechef.com/problems/ALEXNUMB

// Solution:
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        ll n, count = 0, sum = 0, flag = 0;
        cin >> n;
        unordered_map<ll, ll> m;
        for(ll i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        for(auto i = m.begin(); i != m.end(); i++)
            sum += i->second;
        for(auto i = m.begin(); i != m.end(); i++) {
            flag += i->second;
            count += (sum-flag);
        }
        cout << count << endl;
    }
    return 0;
}