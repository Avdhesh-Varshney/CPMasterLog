// Gasoline Introduction
// Problem Code - BEGGASOL

// https://www.codechef.com/problems/BEGGASOL

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int f[n];
        for(int i = 0; i < n; i++)
            cin >> f[i];
        int sum = f[0], count = 0;
        for(int i = 1; i < n; i++) {
            if(sum != 0) {
                sum = sum + f[i] -1;
                count++;
            }
        }
        cout << sum+count << endl;
    }
    return 0;
}