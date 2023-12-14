// Chef and Employment Test
// Problem Code : CK87MEDI

// https://www.codechef.com/problems/CK87MEDI

// Solution:
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        cout << a[(n+k)/2] << endl;
    }
    return 0;
}
