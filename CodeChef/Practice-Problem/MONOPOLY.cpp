// Monopoly in Chefland
// Problem Code - MONOPOLY

// https://www.codechef.com/problems/MONOPOLY

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b < c)
            cout << "Yes" << endl;
        else if(a+c < b)
            cout << "Yes" << endl;
        else if(b+c < a)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}