// Fever
// Problem Code - FEVER

// https://www.codechef.com/problems/FEVER

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
        if(x > 98)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}