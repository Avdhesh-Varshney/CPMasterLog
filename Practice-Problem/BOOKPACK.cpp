// Packing Books
// Problem Code - BOOKPACK

// https://www.codechef.com/problems/BOOKPACK

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
        if(y%z == 0)
            cout << x*(y/z) << endl;
        else
            cout << x*((y/z) + 1) << endl;
    }
    return 0;
}