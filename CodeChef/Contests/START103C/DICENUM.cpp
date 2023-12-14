#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a[3], b[3];
        for(int i = 0; i < 3; i++) cin >> a[i];
        for(int i = 0; i < 3; i++) cin >> b[i];
        sort(a, a+3);
        sort(b, b+3);
        int x = 0, y = 0;
        for(int i = 2; i >= 0; i--) x = x*10 + a[i];
        for(int i = 2; i >= 0; i--) y = y*10 + b[i];
        if(x > y) cout << "Alice" << endl;
        else if(x == y) cout << "Tie" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}