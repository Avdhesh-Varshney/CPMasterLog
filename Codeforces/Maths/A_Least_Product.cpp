#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, temp;
    cin >> t;
    while(t--) {
        cin >> n;
        bool negative = false, zero = false;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp < 0) negative = !negative;
            else if(temp == 0) zero = true;
        }
        if(zero || negative) cout << 0 << endl;
        else cout << "1\n1 0" << endl;
    }
    return 0;
}