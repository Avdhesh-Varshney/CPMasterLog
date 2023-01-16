// Drumpf for President!
// Problem Code - STUDVOTE

// https://www.codechef.com/problems/STUDVOTE

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n], count = 0;
        unordered_map<int, int> m;
        set<int> s;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
            if(a[i] == i+1)
                s.insert(a[i]);
        }
        for(auto it : m)
            if(s.find(it.first) == s.end())
                if(it.second >= k)
                    count++;
        cout << count << endl;
    }
    return 0;
}