// Chef and Eid
// Problem Code - EID

// https://www.codechef.com/problems/EID

// Solution:
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int v[n], ans = INT_MAX;
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v, v+n);
        for(int i = 0; i < n-1; i++) {
            if(abs(v[i]-v[i+1]) < ans)
                ans = abs(v[i]-v[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}