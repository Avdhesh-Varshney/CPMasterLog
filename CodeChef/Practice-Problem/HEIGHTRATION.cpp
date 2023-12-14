// Height of Rationals
// Problem Code - HEIGHTRATION

// https://www.codechef.com/problems/HEIGHTRATION

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int a, b;
    cin >> a >> b;
    int large = (a > b)?a : b;
    cout << large << endl;
    return 0;
}