#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(2*y > 15*x) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}