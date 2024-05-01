#include <bits/stdc++.h>
using namespace std;
int count(int& n, vector<int>& v, int& val) {
    int ans = 0, rating = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] > rating) {
            rating = v[i];
            if(rating == val) ++ans;
        } else if(rating == val) ++ans;
    }
    return ans;
}
int main() {
    int t, n, k, val;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        --k;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        val = a[k];
        b = a;
        swap(a[0], a[k]);
        for(int i = 0; i < n; i++) {
            if(b[i] > b[k]) {
                swap(b[i], b[k]);
                break;
            }
        }
        cout << max(count(n, a, val), count(n, b, val)) << endl;
    }
    return 0;
}