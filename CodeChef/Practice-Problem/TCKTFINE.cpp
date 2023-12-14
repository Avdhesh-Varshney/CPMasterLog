// Ticket Fine
// Problem Code - TCKTFINE

// https://www.codechef.com/problems/TCKTFINE

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, p, q;
        cin >> x >> p >> q;
        cout << (p-q)*x << endl;
    }
    return 0;
}