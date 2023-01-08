// Circular Track
// Problem Code - LOOP

// https://www.codechef.com/problems/LOOP

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, m;
        cin >> a >> b >> m;
        int n = abs(a-b);
        if(n > m/2)
            cout << abs(m-n) << endl;
        else
            cout << n << endl;
    }
    return 0;
}