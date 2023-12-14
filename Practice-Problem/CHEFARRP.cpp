// Chef and Subarrays
// Problem Code : CHEFARRP

// https://www.codechef.com/problems/CHEFARRP

// Solution:
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
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++) {
            int sum = 0, prod = 1;
            for(int j = i; j < n; j++) {
                sum += a[j];
                prod *= a[j];
                if(sum == prod)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}