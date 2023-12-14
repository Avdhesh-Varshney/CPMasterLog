#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int cnt = 1, flag = (s[0] == '?') ? 1 : 0;
        for(auto &ch : s) if(ch == '?') cnt *= 10;
        if(s[0] == '0') cout << 0 << endl;
        else if(flag == 1) {
            if(s.length() == 1) cout << 9 << endl;
            else cout << (cnt/10)*9 << endl;
        } else cout << cnt << endl;
    }
    return 0;
}