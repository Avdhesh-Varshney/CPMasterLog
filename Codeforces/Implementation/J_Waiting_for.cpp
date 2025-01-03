#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    char ch;
    cin >> t;
    int passangers = 0;
    while(t--) {
        cin >> ch >> n;
        if(ch == 'B') {
            if(n >= passangers+1) {
                cout << "YES" << endl;
                passangers = 0;
            } else {
                cout << "NO" << endl;
                passangers -= n;
            }
        } else passangers += n;
    }
    return 0;
}