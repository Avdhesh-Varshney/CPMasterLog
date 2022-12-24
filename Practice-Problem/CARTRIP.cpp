// Car Trip
// Problem Code - CARTRIP

// https://www.codechef.com/problems/CARTRIP

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(x <= 300)
            cout << "3000" << endl;
        else
            cout << x*10 << endl;
    }
    return 0;
}