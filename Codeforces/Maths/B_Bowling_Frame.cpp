#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long w, b;
        cin >> w >> b;
        cout << long((sqrt(1 + 8 * (w + b)) - 1) / 2) << endl;
    }
    return 0;
}