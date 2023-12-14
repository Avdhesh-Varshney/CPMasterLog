// X Jumps
// Problem Code - XJUMP

// https://www.codechef.com/problems/XJUMP

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
        cout << x%y + x/y << endl;
    }
    return 0;
}