// Coin Flip
// Problem Code - CONFLIP

// https://www.codechef.com/problems/CONFLIP

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int g;
        cin >> g;
        while(g--) {
            int i, n, q;
            cin >> i >> n >> q;
            if(i == q)
                cout << n/2 << endl;
            else
                cout << n - n/2 << endl;
        }
    }
    return 0;
}