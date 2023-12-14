// N Queens Puzzle Solved !
// Problem Code - EUREKA

// https://www.codechef.com/problems/EUREKA

// Solution:
#include <bits/stdc++.h>
using namespace std;
int func(float n) {
    float ans1 = (0.143*n);
    float ans = pow(ans1, n);
    int r = round(ans);
    return r;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        float n;
        cin >> n;
        cout << func(n) << endl;
    }
    return 0;
}