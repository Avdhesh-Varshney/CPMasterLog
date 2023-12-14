// Dominant Element
// Problem Code - DOMINANT2

// https://www.codechef.com/problems/DOMINANT2

// Solution:
#include <bits/stdc++.h>
using namespace std;
bool check(unordered_map<int, int> &m) {
    vector<int> v;
    for(auto i : m)
        v.push_back(i.second);
    sort(v.begin(), v.end(), greater<int>());
    if(v[0] > v[1])
        return true;
    return false;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        if(m.size() == 1)
            cout << "YES" << endl;
        else if(check(m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}