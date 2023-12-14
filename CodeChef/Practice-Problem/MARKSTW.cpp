// Alice and Marks
// Problem Code - MARKSTW

// https://www.codechef.com/problems/MARKSTW

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int x, y;
    cin >> x >> y;
    if(x >= 2*y)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}