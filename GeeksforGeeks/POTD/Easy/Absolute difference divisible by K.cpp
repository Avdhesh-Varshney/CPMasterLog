// 8 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long

    long long countPairs(int n, int arr[], int k) {
        ll res = 0;
        map<ll, ll>mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]%k]+=1;
        }
        for(auto it: mp) {
            ll val = it.second;
            res+=(val*(ll)(val-1)/2);
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
