#include <iostream>
using namespace std;

int main() {
    int t, n, temp;
    cin >> t;
    while(t--) {
        cin >> n;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp == ans+1) ans = temp + 1;
            else ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}