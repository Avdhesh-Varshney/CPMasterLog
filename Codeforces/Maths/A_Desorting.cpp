#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], diff = INT_MAX, flag = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(i != 0) {
                diff = min(diff, a[i]-a[i-1]);
                if(a[i] < a[i-1]) flag = 1;
            }
        }
        if(flag) cout << 0 << endl;
        else cout << diff/2 + 1 << endl;
    }
    return 0;
}