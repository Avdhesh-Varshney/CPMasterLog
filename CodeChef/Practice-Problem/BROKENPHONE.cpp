// Broken Phone
// Problem Code - BROKENPHONE

// https://www.codechef.com/problems/BROKENPHONE

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
        if(x == y)
            cout << "ANY" << endl;
        else if(x > y)
            cout << "NEW PHONE" << endl;
        else if(x < y)
            cout << "REPAIR" << endl;
    }
    return 0;
}