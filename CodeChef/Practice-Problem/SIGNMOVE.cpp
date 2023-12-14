// Sign Moves
// Problem Code - SIGNMOVE

// https://www.codechef.com/problems/SIGNMOVE

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        long long int even = n/2;
        long long int odd = n - even;
        long long int sum_even = even*(even+1);
        long long int sum_odd = odd*odd;
        cout << sum_even - sum_odd << endl;
    }
    return 0;
}