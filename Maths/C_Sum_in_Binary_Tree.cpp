#include <iostream>
#include <math.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ull n, ans = 0;
        cin >> n;
        while(n) {
            ans += n;
            n /= 2;
        }
        cout << ans << endl;
    }
    return 0;
}