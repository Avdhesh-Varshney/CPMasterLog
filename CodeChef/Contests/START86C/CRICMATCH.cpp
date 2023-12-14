#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if(36*m >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}