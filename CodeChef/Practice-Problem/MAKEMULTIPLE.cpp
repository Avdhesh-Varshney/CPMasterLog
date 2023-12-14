// Make Multiple
// Problem Code - MAKEMULTIPLE

// https://www.codechef.com/problems/MAKEMULTIPLE

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if(b%a != 0) {
            if(b > 2*a)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}