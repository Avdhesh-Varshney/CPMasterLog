// Fit to Play
// Problem Code - PLAYFIT

// https://www.codechef.com/problems/PLAYFIT

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, maxi = -1, min = INT_MAX;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++) {
            if(min > a[i])
                min = a[i];
            else
                maxi = max(maxi, a[i]-min);
        }
        if(n == 1)
            cout << "UNFIT" << endl;
        else {
            if(maxi > 0)
                cout << maxi << endl;
            else
                cout << "UNFIT" << endl;
        }
    }
    return 0;
}