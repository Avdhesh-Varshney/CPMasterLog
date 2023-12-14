#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int x = 1, flag = 0;
        while(x <= n/2 && !flag) {
            if(x%3 == 0) {++x; continue;}
            int y = x+1, z = n-x-y;
            while(y <= (n-x)/2 && !flag) {
                if(y%3 != 0 && z%3 != 0 && x != y && y != z && x != z) {
                    cout << "YES\n" << x << " " << y << " " << z << endl;
                    flag = 1;
                }
                ++y; --z;
            }
            ++x;
        }
        if(!flag) cout << "NO" << endl;
    }
    return 0;
}