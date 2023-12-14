// Nahaane Jaa
// Problem Code - EQSARRAY

// https://www.codechef.com/problems/EQSARRAY

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
        int a[n];
        bool flag = false;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == k && i != n-1)
                flag = true;
        }
        if(a[0] == k && n == 1)
            flag = true;
        if(flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}