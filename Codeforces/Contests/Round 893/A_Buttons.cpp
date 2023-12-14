#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(c%2 == 0) {
            int n = c/2;
            if(a+n > b+n) cout << "First" << endl;
            else cout << "Second" << endl;
        } else {
            int n = c/2;
            if(a+n+1 > b+n) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }
    return 0;
}