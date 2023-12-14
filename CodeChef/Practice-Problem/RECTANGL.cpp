// Rectangle
// Problem Code - RECTANGL

// https://www.codechef.com/problems/RECTANGL

// Solution:
#include <bits/stdc++.h>
using namespace std;
void rectangle(float a, float b, float c, float d) {
    if(a == b and c == d) {
        float d1 = sqrt((a*a) + (c*c));
        float d2 = sqrt((b*b) + (d*d));
        if(d2 == d1) {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else if(b == c and a == d) {
        float d1 = sqrt((a*a) + (b*b));
        float d2 = sqrt((c*c) + (d*d));
        if(d2 == d1) {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else if(a == c and b == d) {
        float d1 = sqrt((a*a) + (b*b));
        float d2 = sqrt((c*c) + (d*d));
        if(d2 == d1) {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        float a, b, c, d;
        cin >> a >> b >> c >> d;
        rectangle(a, b, c, d);
    }
    return 0;
}