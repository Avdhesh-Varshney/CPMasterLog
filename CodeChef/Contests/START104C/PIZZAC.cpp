#include <bits/stdc++.h>
using namespace std;
bool solve(int& n) {
    if(n == 1) return true;
    return n%2 == 0;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(solve(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}