#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        int zero = 0, one = 0;
        for(auto &ch : s) {
            if(ch == '0') ++zero;
            else ++one;
        }
        if(zero > one || (zero != 0 && one != 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}