// Chefland Games
// Problem Code - CHEFGAMES

// https://www.codechef.com/problems/CHEFGAMES

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a == 0 and b == 0 and c == 0 and d == 0)
            cout << "IN" << endl;
        else
            cout << "OUT" << endl;
    }
    return 0;
}