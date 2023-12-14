// Sarthak and His Magic Grid
// Problem Code - GRIDXOR

// https://www.codechef.com/problems/GRIDXOR

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
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                cout << 1 << " ";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}