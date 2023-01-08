// Make A and B equal
// Problem Code - MAKEABEQUAL

// https://www.codechef.com/problems/MAKEABEQUAL

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long a[n], b[n], sum = 0, suma = 0, sumb = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            suma += a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            sumb += b[i];
            sum += abs(b[i] - a[i]);
        }
        if(suma != sumb)
            cout << -1 << endl;
        else
            cout << sum/2 << endl;
    }
    return 0;
}