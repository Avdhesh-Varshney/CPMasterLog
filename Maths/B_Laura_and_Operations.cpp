#include <iostream>
using namespace std;
int main() {
    int t, a, b, c;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;

        if(abs(b - c)%2 == 0) cout << 1 << " ";
        else cout << 0 << " ";

        if(abs(a - c)%2 == 0) cout << 1 << " ";
        else cout << 0 << " ";

        if(abs(a - b)%2 == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}