// Building Race
// Problem Code - BUILDINGRACE

// https://www.codechef.com/problems/BUILDINGRACE

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        float a, b, x, y;
        cin >> a >> b >> x >> y;
        if((a/x) == (b/y))
            cout << "Both" << endl;
        else if((a/x) > (b/y))
            cout << "Chefina" << endl;
        else
            cout << "Chef" << endl;
    }
    return 0;
}