// Puppy and Sum
// Problem Code - PPSUM

// https://www.codechef.com/problems/PPSUM

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int d, n;
        cin >> d >> n;
        for (int j = 1; j <= d; j++) {
            int ans = 0;
            for (int i = 1 ; i <= n; i++)
                ans += i;
            n = ans;
        }
        cout << n << endl;
    }
    return 0;
}