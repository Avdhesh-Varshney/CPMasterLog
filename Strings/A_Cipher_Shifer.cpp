#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        string s, ans = "";
        cin >> n >> s;
        char ch = s[0];
        for(int i = 1; i < n; i++) {
            if(ch == s[i]) {
                ans += ch;
                if(i+1 < n) ch = s[++i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}