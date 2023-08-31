#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string ans = "";
        char ch;
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                cin >> ch;
                if(ch != '.') ans += ch;
            }
        }
        cout << ans << endl;
    }
    return 0;
}