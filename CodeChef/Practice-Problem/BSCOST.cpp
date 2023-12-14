// Binary String Cost
// Problem Code - BSCOST

// https://www.codechef.com/problems/BSCOST

// Solution:
#include <iostream>
using namespace std;
bool check(int n, string s) {
    char ch = s[0];
    for(int i = 0; i < n; i++)
        if(ch != s[i])
            return false;
    return true;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, y;
        string s;
        cin >> n >> x >> y >> s;
        if(!check(n, s)) {
            if(x > y)
                cout << y << endl;
            else
                cout << x << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}