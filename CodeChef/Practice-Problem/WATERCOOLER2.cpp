// The Cooler Dilemma 2
// Problem Code - WATERCOOLER2

// https://www.codechef.com/problems/WATERCOOLER2

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
        if(x >= y)
            cout << 0 << endl;
        else {
            if(y%x == 0)
                cout << (y/x) - 1 << endl;
            else
                cout << y/x << endl;
        }
    }
    return 0;
}