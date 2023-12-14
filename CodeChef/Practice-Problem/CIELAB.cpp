// Ciel and A-B Problem
// Problem Code - CIELAB

// https://www.codechef.com/problems/CIELAB

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int a, b;
    cin >> a >> b;
    int d = a-b;
    if(d%10 == 9)
        cout << a-b-1 << endl;
    else
        cout << a-b+1 << endl;
    return 0;
}