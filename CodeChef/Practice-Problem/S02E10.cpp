// The One with Russ
// Problem Code - S02E10

// https://www.codechef.com/problems/S02E10

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, k, count = 0;
        cin >> n >> x >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            if(abs(a[i]-b[i]) <= k)
                count++;
        }
        if(count >= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}