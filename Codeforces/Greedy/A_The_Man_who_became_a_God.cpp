#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        --k;
        priority_queue<int> diff;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(i) diff.push(abs(a[i] - a[i-1]));
        }
        int ans = 0;
        while(!diff.empty()) {
            if(k > 0) --k;
            else ans += diff.top();
            diff.pop();
        }
        cout << ans << endl;
    }
    return 0;
}