// Multivitamin Tablets
// Problem Code - TABLETS

// https://www.codechef.com/problems/TABLETS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(3*x <= y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}