// Remove Element
// Problem Code - REMELEM

// https://www.codechef.com/problems/REMELEM

// Solution:
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        for(ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            v.push_back(temp);
        }
        if(n == 1)
            cout << "YES" << endl;
        else {
            sort(v.begin(), v.end());
            if(v[0]+v[n-1] <= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}