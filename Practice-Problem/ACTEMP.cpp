// Air Conditioner Temperature
// Problem Code - ACTEMP

// https://www.codechef.com/problems/ACTEMP

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
        if(a <= b && c <= b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}