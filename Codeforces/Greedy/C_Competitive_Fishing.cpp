#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> k >> s;
        vector<int> vals;
        int sum = 0;
        for (int i = n - 1; i > 0; --i) {
            sum += (s[i] == '1' ? 1 : -1);
            if (sum > 0) vals.push_back(sum);
        }
        sort(vals.begin(), vals.end());
        int ans = 1;
        while (k > 0 && !vals.empty()) {
            k -= vals.back();
            vals.pop_back();
            ++ans;
        }
        cout << (k > 0 ? -1 : ans) << endl;
    }
    return 0;
}