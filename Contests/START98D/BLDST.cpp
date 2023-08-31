#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for(int i = 0; i < m; i++) cin >> a[i];
        int layer = n, res = 0;
        for(auto &i : a) {
            if(i == n) continue;
            else if(res > 0) {
                int temp = i;
                temp -= min(i, res);
                while(layer > temp) {
                    ++res;
                    --layer;
                }
            }
            else {
                int temp = layer - i;
                res += temp;
                layer -= temp;
            }
            if(layer <= 0) break;
        }
        cout << layer << endl;
    }
    return 0;
}