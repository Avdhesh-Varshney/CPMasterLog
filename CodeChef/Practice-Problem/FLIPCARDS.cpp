// Filp the Cards
// Problem Code - FLIPCARDS

// https://www.codechef.com/problems/FLIPCARDS

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        if(x > n-x)
            cout << n-x << endl;
        else
            cout << x << endl;
    }
    return 0;
}