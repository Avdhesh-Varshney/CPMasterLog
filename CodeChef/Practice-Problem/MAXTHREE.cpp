// Maximum of Three Numbers
// Problem Code - MAXTHREE

// https://www.codechef.com/problems/MAXTHREE

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int l = (a > b)? a : b;
        int large = (l > c) ? l : c;
        cout << large << endl;
    }
    return 0;
}