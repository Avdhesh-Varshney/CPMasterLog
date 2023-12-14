// Two Dishes
// Problem Code - TWODISH

// https://www.codechef.com/problems/TWODISH

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, a, b, c, count = 0;
        cin >> n >> a >> b >> c;
        if(a > b) {
            count += b;
            a = a-b;
            b = 0;
        }
        else {
            count += a;
            b = b-a;
            a = 0;
        }
        if(b > 0) {
            if(c > b) {
                count += b;
                c = c-b;
                b = 0;
            }
            else {
                count += c;
                b = b-c;
                c = 0;
            }
        }
        if(count >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}