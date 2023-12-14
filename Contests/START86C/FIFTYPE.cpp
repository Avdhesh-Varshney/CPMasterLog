#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        cin >> n;
        while(n != 50) {
            if(n > 50) n -= 3;
            else if(n < 50) n += 2;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}