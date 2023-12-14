// Maximum Length Even Subarray
// Problem Code - MXEVNSUB

// https://www.codechef.com/problems/MXEVNSUB

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
        if((n*(n+1)/2)%2 == 0)
            cout << n << endl;
        else
            cout << n-1 << endl;
    }
    return 0;
}