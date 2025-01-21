#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        bool check = true;
        for(int i = 1; i < n; i++) {
            if(abs(arr[i]-arr[i-1]) != 5 && abs(arr[i]-arr[i-1]) != 7) {
                check = false;
                break;
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}