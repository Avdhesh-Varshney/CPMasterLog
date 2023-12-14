// Test Averages
// Problem Code - TESTAVG

// https://www.codechef.com/problems/TESTAVG

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
        int a1 = (a+b)/2;
        int a2 = (c+b)/2;
        int a3 = (a+c)/2;
        if(a1 < 35 or a2 < 35 or a3 < 35)
            cout << "Fail" << endl;
        else
            cout << "Pass" << endl;
    }
    return 0;
}