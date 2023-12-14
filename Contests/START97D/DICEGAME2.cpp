#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a = 0, b = 0, as = INT_MAX, bs = INT_MAX, temp;
        for(int i = 0; i < 3; i++) {
            cin >> temp;
            a += temp;
            if(temp < as) as = temp;
        }
        for(int i = 0; i < 3; i++) {
            cin >> temp;
            b += temp;
            if(temp < bs) bs = temp;
        }
        if(a-as == b-bs) cout << "Tie" << endl;
        else if(a-as > b-bs) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}