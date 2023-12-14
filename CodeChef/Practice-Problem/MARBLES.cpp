// Marbles
// Problem Code - MARBLES

// https://www.codechef.com/problems/MARBLES

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        long int ans = 1;
        for(int j = 1; j < k; j++)
            ans = ans*(n-k+j)/j;
        cout << ans << endl;
    }
    return 0;
}