// Odd Pairs
// Problem Code - ODDPAIRS

// https://www.codechef.com/problems/ODDPAIRS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        cout << (n*n)/2 << endl;
    }
    return 0;
}