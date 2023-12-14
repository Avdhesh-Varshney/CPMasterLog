// Expert Setter
// Problem Code - EXPERT

// https://www.codechef.com/problems/EXPERT

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
        float per = (y*100)/x;
        if(per >= 50)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}