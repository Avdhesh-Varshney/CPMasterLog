// Diagonal Movement
// Problem Code - DIAGMOVE

// https://www.codechef.com/problems/DIAGMOVE

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
        int sum = x+y;
        if(sum%2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}