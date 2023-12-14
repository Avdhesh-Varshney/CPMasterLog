// Guessing Game
// Problem Code : GUESS

// https://www.codechef.com/problems/GUESS

// Solution:
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        ll N, M;
        cin >> N >> M;
        ll aliceEven = N / 2;
        ll aliceOdd = (N + 1) / 2;
        ll bobEven = M / 2;
        ll bobOdd = (M + 1) / 2;
        ll odd = ((aliceOdd * bobEven) + (aliceEven * bobOdd));
        ll even = ((aliceOdd * bobOdd) + (aliceEven * bobEven));
        ll total = (odd + even);
        if(odd == 0) {
            cout << "0/1" << endl;
        } else if(odd == even) {
            cout << "1/2" << endl;
        } else {
            int gcd = __gcd(odd, (odd + even));
            odd /= gcd;
            total /= gcd;
            cout << odd << "/" << total << endl;
        }
    }
    return 0;
}