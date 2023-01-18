// Three Boxes
// Problem Code - THREEBOX

// https://www.codechef.com/problems/THREEBOX

// Solution:
#include <iostream>
using namespace std;
int boxes(int a, int b, int c, int d) {
    if(a+b+c <= d)
        return 1;
    else if(a+b <= d or b+c <= d or c+a <= d)
        return 2;
    else
        return 3;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;
        int ans = boxes(a, b, c, d);
        cout << ans << endl;
    }
    return 0;
}