// Bob at the Bank
// Problem Code - BOBBANK

// https://www.codechef.com/problems/BOBBANK

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
        int loosing_amt = x-y;
        cout << w + loosing_amt*z << endl;
    }
    return 0;
}