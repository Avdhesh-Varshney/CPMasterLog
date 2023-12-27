#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], s = 0;
        for(int i = 0; i < n-1; i++) cin >> a[i];
        for(int i = 0; i < n-1; i++) s += a[i];
        cout << -(s) << endl;
    }
    return 0;
}