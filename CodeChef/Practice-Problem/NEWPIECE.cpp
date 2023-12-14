// New Piece
// Problem Code - NEWPIECE

// https://www.codechef.com/problems/NEWPIECE

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if(a == p and b == q)
            cout << 0 << endl;
        else if((a+b)%2 == 0 and (p+q)%2 == 0)
            cout << 2 << endl;
        else if((a+b)%2 != 0 and (p+q)%2 != 0)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}