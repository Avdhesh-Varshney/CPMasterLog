// Integers that sum to the same value
// Problem Code - SUMNEQ

// https://www.codechef.com/problems/SUMNEQ

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int x, count = 0;
    cin >> x;
    for(int i = 1; i <= x; i++) {
        for(int j = 1; j <= x; j++) {
            if(i + j == x)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}