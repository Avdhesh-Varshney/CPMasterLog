#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        long long n, ans = 0;
        cin >> n;
        if(n == 1 || n == 2) cout << 0 << endl;
        else if(n == 3) cout << 2 << endl;
        else if(n == 4) cout << 3 << endl;
        else if(n%2 == 0) {
            ans += 3;
            n -= 3;
            n /= 2;
            cout << ans+(3*n) << endl;
        }
        else {
            ans += 2;
            n -= 2;
            n /= 2;
            cout << ans+(3*n) << endl;
        }
    }
    return 0;
}