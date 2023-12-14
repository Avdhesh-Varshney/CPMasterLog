#include <bits/stdc++.h>
using namespace std;
int sum(int n) {
    int s = 0;
    while(n > 0) {
        s += n%10;
        n /= 10;
    }
    return s;
}
int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        while((sum(n))%k != 0) ++n;
        cout << n << endl;
    }
    return 0;
}