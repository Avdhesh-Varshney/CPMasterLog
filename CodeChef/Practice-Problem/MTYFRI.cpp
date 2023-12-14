// Mighty Friend
// Problem Code - MTYFRI

// https://www.codechef.com/problems/MTYFRI

// Solution:
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> to, mo;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if(i%2 != 0)
            to.push_back(temp);
        else
            mo.push_back(temp);
    }
    sort(to.begin(), to.end());
    sort(mo.begin(), mo.end(), greater<int>());
    for(int i = 0; i < to.size(); i++) {
        if(to[i] < mo[i] && k > 0) {
            swap(to[i], mo[i]);
            k--;
        }
    }
    int t_sum = accumulate(to.begin(), to.end(), 0);
    int m_sum = accumulate(mo.begin(), mo.end(), 0);
    if (t_sum > m_sum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}