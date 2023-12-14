// Speed Limit Test
// Problem Code - SPEEDTEST

// https://www.codechef.com/problems/SPEEDTEST

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        float a, x, b, y;
        cin >> a >> x >> b >> y;
        float alice = a/x;
        float bob = b/y;
        if(alice == bob)
            cout << "EQUAL" << endl;
        else if(alice > bob)
            cout << "ALICE" << endl;
        else if(bob > alice)
            cout << "BOB" << endl;
    }
    return 0;
}