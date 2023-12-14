// Pythagorean Pair
// Problem Code - PYTHAGORAS

// https://www.codechef.com/problems/PYTHAGORAS

// Solution:
#include <iostream>
#include <math.h>
using namespace std;
void solution() {
    long long int n, x = 0;
    cin >> n;
    while(n%2 == 0) {
        x++;
        n /= 2;
    }
    if(x%2 == 1) {
        x--;
        n *= 2;
    }
    for(int i = 0; i*i <= n; i++) {
        int y = n-i*i, z = sqrt(y);
        if(z*z == y) {
            cout << (z<<(x/2)) << " " << (i<<(x/2)) << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}