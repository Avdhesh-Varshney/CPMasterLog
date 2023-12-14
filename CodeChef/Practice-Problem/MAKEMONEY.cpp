// Make Money
// Problem Code - MAKEMONEY

// https://www.codechef.com/problems/MAKEMONEY

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, c;
        cin >> n >> x >> c;
        int arr[n];
        int q = 0, w = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if((x-arr[i]) > c) {
                arr[i] = x;
                q += c;
            }
            w += arr[i];
        }
        cout << w-q << endl;
    }
    return 0;
}