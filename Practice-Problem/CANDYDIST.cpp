// Candy Distribution
// Problem Code - CANDYDIST

// https://www.codechef.com/problems/CANDYDIST

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if(n%m == 0) {
            int d = n/m;
            if(d%2 == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}