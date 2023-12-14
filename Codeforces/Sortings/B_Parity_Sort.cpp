#include <iostream>
#include <algorithm>
using namespace std;
bool check(int n, int a[], int b[]) {
    sort(a, a+n);
    for(int i = 0; i < n; i++) if(a[i]%2 != b[i]%2) return false;
    return true;
}
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        if(check(n, a, b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}