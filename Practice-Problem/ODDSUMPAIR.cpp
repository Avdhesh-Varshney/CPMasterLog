// Odd Sum Pair
// Problem Code - ODDSUMPAIR

// https://www.codechef.com/problems/ODDSUMPAIR

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
        if((a+b)%2 == 1 or (a+c)%2 == 1 or (b+c)%2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}