#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        int n1 = s[0]-'0', n2 = s[2]-'0';
        if(n1 == n2) cout << n1 << "=" << n2 << endl;
        else if(n1 > n2) cout << n1 << ">" << n2 << endl;
        else cout << n1 << "<" << n2 << endl;
    }
    return 0;
}