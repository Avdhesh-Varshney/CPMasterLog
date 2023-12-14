// Fit in Data Type
// Problem Code - DATATYPE

// https://www.codechef.com/problems/DATATYPE

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
        if(n >= x)
            cout << x << endl;
        else
            cout << x%(n+1) << endl;
    }
    return 0;
}