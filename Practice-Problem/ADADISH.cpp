// Ada and Dishes
// Problem Code - ADADISH

// https://www.codechef.com/problems/ADADISH

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
        int c[n], s1 = 0, s2 = 0;
        for(int i = 0; i < n; i++)
            cin >> c[i];
        sort(c, c+n, greater<int>());
        for(int i = 0; i < n; i++) {
            if(s1 > s2)
                s2 += c[i];
            else
                s1 += c[i];
        }
        cout << max(s1, s2) << endl;
    }
    return 0;
}