// Number of Credits
// Problem Code - CREDS

// https://www.codechef.com/problems/CREDS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (4*x) + (2*y) << endl;
    }
    return 0;
}