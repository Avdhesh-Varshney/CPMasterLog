// Download File
// Problem Code - DWNLD

// https://www.codechef.com/problems/DWNLD

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int t[n], d[n], amount = 0, i = 0;
        for(i = 0; i < n; i++) {
            cin >> t[i] >> d[i];
            if(t[i] - k >= 0) {
                t[i] = t[i] - k;
                k = 0;
            }
            else {
                k = k - t[i];
                t[i] = 0;
            }
        }
        for(i = 0; i < n; i++)
            amount += t[i]*d[i];
        cout << amount << endl;
    }
    return 0;
}