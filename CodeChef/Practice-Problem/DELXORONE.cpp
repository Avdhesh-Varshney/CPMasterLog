// One-XOR Deletions
// Problem Code - DELXORONE

// https://www.codechef.com/problems/DELXORONE

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
        int a[n], ans = n;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        for(auto i : m) {
            int val = 0;
            if(i.first&1)
                val = i.first - 1;
            else
                val = i.first + 1;
            int a = i.second;
            auto it = m.find(val);
            if(it != m.end())
                a += m[val];
            if(n-a < ans)
                ans = n-a;
        }
        cout << ans << endl;
    }
    return 0;
}