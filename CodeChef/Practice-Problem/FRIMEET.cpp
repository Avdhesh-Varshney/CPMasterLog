// Friends Meetup
// Problem Code - FRIMEET

// https://www.codechef.com/problems/FRIMEET

// Solution:
#include <iostream>
using namespace std;
void meetup(int a, int b) {
    if(a == b)
        cout << "YES" << endl;
    else if(a < b)
        cout << "NO" << endl;
    else {
        while(a > b) {
            a += 1;
            b += 2;
        }
        if(a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x1, x2;
        cin >> x1 >> x2;
        meetup(x1, x2);
    }
    return 0;
}