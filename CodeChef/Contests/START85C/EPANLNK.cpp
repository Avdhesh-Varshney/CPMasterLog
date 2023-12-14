#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string n;
        cin >> n;
        if(n.length() > 1) {
            int x = stoi(n.substr(n.length()-2, 2));
            cout << x%20 << endl;
        }
        else cout << n << endl;
    }
    return 0;
}