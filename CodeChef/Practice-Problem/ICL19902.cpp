// FlatLand
// Problem Code - ICL1902

// https://www.codechef.com/problems/ICL1902

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int i, n;
        cin >> n;
        int count = 0;
        while(n > 0) {
            int r = sqrt(n);
            r = r*r;
            n -= r;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}