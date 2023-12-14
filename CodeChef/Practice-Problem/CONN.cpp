// Construct N
// Problem Code - CONN

// https://www.codechef.com/problems/CONN

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n%2 == 0 || n%7 == 0)
            cout << "YES" << endl;
        else if(n>7)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}