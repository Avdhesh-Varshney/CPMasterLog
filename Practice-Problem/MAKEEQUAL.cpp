// Make Them Equal
// Problem Code - MAKEEQUAL

// https://www.codechef.com/problems/MAKEEQUAL

// Solution:
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        cout << a[n-1] - a[0] << endl;
    }
    return 0;
}