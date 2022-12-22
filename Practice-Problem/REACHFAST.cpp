// Reach Fast
// Problem Code - REACHFAST

// https://www.codechef.com/problems/REACHFAST

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y, k;
        cin >> x >> y >> k;
        int diff = abs(x-y);
        if(abs(x-y)%k == 0)
            cout << abs(x-y)/k << endl;
        else if(abs(x-y)%k != 0)
            cout << abs(x-y)/k +1 << endl;
    }
    return 0;
}