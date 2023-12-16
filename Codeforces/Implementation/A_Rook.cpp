#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        char ch = s[0];
        int num = s[1] - '0' - 1;
        while(num > 0) cout << ch << num-- << endl;
        num = s[1] - '0' + 1;
        while(num < 9) cout << ch << num++ << endl;
        --ch;
        while(ch >= 'a') cout << ch-- << s[1] << endl;
        ch = s[0] + 1;
        while(ch <= 'h') cout << ch++ << s[1] << endl;
    }
    return 0;
}