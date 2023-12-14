// Scalene Triangle
// Problem Code - SCALENE

// https://www.codechef.com/problems/SCALENE

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
        if(a != b and a != c and b != c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}