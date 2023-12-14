#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], ans = 0;
        float sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if(sum == 0) continue;
            float balls = i+1;
            float strike = sum/balls;
            if(strike*100 == 100) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}