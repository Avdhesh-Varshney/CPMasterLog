// Reach on Time
// Problem Code - TIMELY

// https://www.codechef.com/problems/TIMELY

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
        if(x >= 30)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}