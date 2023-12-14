// Football
// Problem Code - MSNSADM1

// https://www.codechef.com/problems/MSNSADM1

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
        int a[n], b[n], c[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        for(int i = 0; i < n; i++) {
            c[i] = 20*a[i] - 10*b[i];
        }
        int max = c[0];
        for(int i = 0; i < n; i++) {
            if(max < c[i])
                max = c[i];
        }
        if(max < 0)
            cout << "0" << endl;
        else
            cout << max << endl;
    }
    return 0;
}