#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], small = INT_MAX, cnt = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] < small)
                small = a[i];
        }
        for(int i = 0; i < n; i++)
            if(small == a[i])
                cnt++;
        cout << n-cnt << endl;
    }
    return 0;
}