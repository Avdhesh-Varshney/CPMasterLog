// Greater Average
// Problem Code - AVGPROBLEM

// https://www.codechef.com/problems/AVGPROBLEM

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        float a, b, c;
        cin >> a >> b >> c;
        float d = (a+b)/2;
        if(d > c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}