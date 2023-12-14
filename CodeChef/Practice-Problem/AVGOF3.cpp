// Average of Three
// Problem Code - AVGOF3

// https://www.codechef.com/problems/AVGOF3

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
        cout << x-1 << " " << x << " " << x+1 << endl;
    }
    return 0;
}