#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; ++i) cin >> arr[i];
        sort(arr.begin(), arr.end());
        long long ans = 0;
        for(int i = 0; i < N; ++i) ans += max(0, arr[i] - i);
        cout << ans << endl;
    }
    return 0;
}