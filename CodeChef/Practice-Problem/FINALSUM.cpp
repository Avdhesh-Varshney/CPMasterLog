// Final Sum
// Problem Code - FINALSUM

// https://www.codechef.com/problems/FINALSUM

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t, n , q;
    cin >> t;
    while(t--) {
        cin >> n >> q;
        int a[n];
        long long int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        for(int i = 0; i < q; i++) {
            int l, r;
            cin >> l >> r;
            if((r-l+1)%2 == 1)
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}