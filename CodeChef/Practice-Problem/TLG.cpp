// The Lead Game
// Problem Code - TLG

// https://www.codechef.com/problems/TLG

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int n;
    cin >> n;
    int a[n], b[n], c[n], d[n], temp = 0, flag = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        a[i] = a[i] + temp;
        temp = a[i];
        b[i] = b[i] + flag;
        flag = b[i];
        if(a[i] > b[i]) {
            c[i] = 1;
            d[i] = a[i] - b[i];
        }
        else {
            c[i] = 2;
            d[i] = b[i] - a[i];
        }
    }
    int ans = 1, large = -1;
    for(int i = 0; i < n; i++) {
        if(large < d[i]) {
            ans = c[i];
            large = d[i];
        }
    }
    cout << ans << " " << large << endl;
    return 0;
}