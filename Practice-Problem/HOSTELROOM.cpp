// Hostel Room
// Problem Code - HOSTELROOM

// https://www.codechef.com/problems/HOSTELROOM

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int a[n], large = x;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++) {
            x += a[i];
            if(large < x)
                large = x;
        }
        cout << large << endl;
    }
    return 0;
}