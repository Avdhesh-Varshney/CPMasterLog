// Tasty Decisions
// Problem Code - TASTEDEC

// https://www.codechef.com/problems/TASTEDEC

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(2*x == 5*y)
            cout << "Either" << endl;
        else if(2*x > 5*y)
            cout << "Chocolate" << endl;
        else
            cout << "Candy" << endl;
    }
    return 0;
}