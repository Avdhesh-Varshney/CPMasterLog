// Nearest Court
// Problem Code - NEARESTCOURT

// https://www.codechef.com/problems/NEARESTCOURT

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y;
        if((x+y)%2 == 0) {
            z = (x+y)/2;
            cout << min(abs(x-z), abs(y-z)) << endl;
        }
        else {
            z = (x+y)/2 + 1;
            cout << max(abs(x-z), abs(y-z)) << endl;
        }
    }
    return 0;
}