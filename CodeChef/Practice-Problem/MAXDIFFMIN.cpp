// Max minus Min
// Problem Code - MAXDIFFMIN

// https://www.codechef.com/problems/MAXDIFFMIN

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
        cout << abs(c-a) << endl;
    }
    return 0;
}