#include <bits/stdc++.h>
using namespace std;
#define type long long
type lcm(type& a, type& b) {
    return (a / __gcd(a, b)) * b;
}
type solve(type& x, type& y, type& k) {
    while(k--) {
        if(x > y) {
            x = __gcd(x, y);
            y = lcm(x, y);
        } else {
            y = __gcd(x, y);
            x = lcm(x, y);
        }
        if(x == y) return x+y;
    }
    return x + y;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        type x, y, k;
        cin >> x >> y >> k;
        if(x == y) cout << x+y << endl;
        else cout << solve(x, y, k) << endl;
    }
    return 0;
}