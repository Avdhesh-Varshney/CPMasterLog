#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    string str;
    cin >> t;
    while(t--) {
        cin >> n >> k >> str;
        int b = 0, i = 0;
        for(auto &ch : str) if(ch == 'B') ++b;
        if(b == k) cout << 0 << endl;
        else {
            cout << 1 << endl;
            if(b > k) {
                for(; i < n && b > k; i++) if(str[i] == 'B') --b;
                cout << i << " A" << endl;
            } else {
                for(; i < n && b < k; i++) if(str[i] == 'A') ++b;
                cout << i << " B" << endl;
            }
        }
    }
    return 0;
}