// Weights
// Problem Code - WGHTS

// https://www.codechef.com/problems/WGHTS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if(w == x+y or w == x or w == y or w == z or w == x+y+z)
            cout << "YES" << endl;
        else if(w == y+z)
            cout << "YES" << endl;
        else if(w == z+x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}