// Good Pairs
// Problem Code - EQPAIR

// https://www.codechef.com/problems/EQPAIR

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<long int, long int> m;
        for(int i = 0; i < n; i++) {
            long int x;
            cin >> x;
            m[x] = m[x] + 1;
        }
        long sum = 0;
        for(auto v : m) {
            if(v.second > 1)
                sum += v.second*(v.second-1)/2;
        }
        cout << sum << endl;
    }
    return 0;
}