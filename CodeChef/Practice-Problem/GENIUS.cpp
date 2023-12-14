// Exact Marks
// Problem Code - GENIUS

// https://www.codechef.com/problems/GENIUS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, s = 0, p = 0;
        cin >> n >> x;
        if(x%3 == 0)
            s = x/3;
        else {
            s = x/3 + 1;
            p = (3*s)-x;
        }
        if(s+p > n)
            cout << "NO" << endl;
        else
            cout << "YES\n" << s << " " << p << " " << n-s-p << endl;
    }
    return 0;
}