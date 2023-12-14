// Just Like Mob!
// Problem Code - MOBKUN

// https://www.codechef.com/problems/MOBKUN

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m, k, x;
        cin >> n >> m >> k >> x;
        int s = x/(n*k + m);
        int d = x - s*(n*k + m);
        if(d == 0 or k == 1)
            cout << "YES" << endl;
        else {
            if(d > (k-1)*n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}