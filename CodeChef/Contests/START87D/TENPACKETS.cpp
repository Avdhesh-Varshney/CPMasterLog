#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int sum = 5*x;
        if(sum > y+(3*x))
            sum = y+(3*x);
        if(sum > 2*y + x)
            sum = 2*y + x;
        cout << sum << endl;
    }
    return 0;
}