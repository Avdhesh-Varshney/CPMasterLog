// Chefland Visa
// Problem Code - VISA

// https://www.codechef.com/problems/VISA

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if(a <= b and c <= d and e >= f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}