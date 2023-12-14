// Split and Maximize
// Problem Code - SPLITMAX

// https://www.codechef.com/problems/SPLITMAX

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long int sum = 0, temp;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            sum += temp;
            sum %= 998244353;
        }
        cout << (sum*(sum-1))%998244353 << endl;
    }
    return 0;
}