// Strange operations
// Problem Code - UTMOPR

// https://www.codechef.com/problems/UTMOPR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        int a[n+k], sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        for(int i = 0; i < k; i++) {
            int temp = sum + 1;
            a[n+i] = temp;
            sum = sum + temp;
        }
        if((a[n+k-1])%2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    return 0;
}