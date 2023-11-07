#include <iostream>
using namespace std;

int main() {
    int t, b, c, h;
    cin >> t;
    while(t--) {
        int ans = 0;
        cin >> b >> c >> h;
        --b;
        if(b >= c) {
            ans += 2*c;
            b -= c;
        } else {
            ans += 2*b;
            b = 0;
        }
        if(b >= h) {
            ans += 2*h;
            b -= h;
        } else {
            ans += 2*b;
        }
        cout << ++ans << endl;
    }
    return 0;
}