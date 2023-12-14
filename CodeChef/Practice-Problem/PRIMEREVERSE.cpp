// Prime Reversal
// Problem Code - PRIMEREVERSE

// https://www.codechef.com/problems/PRIMEREVERSE

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
        if(count(a.begin(), a.end(), '1') == count(b.begin(), b.end(), '1'))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}