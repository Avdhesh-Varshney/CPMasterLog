#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) cout << i * 2 - 1 << " ";
        cout << endl;
    }
    return 0;
}