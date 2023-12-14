// Magician versus Chef
// Problem Code - MAGICHF

// https://www.codechef.com/problems/MAGICHF

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, s;
        cin >> n >> x >> s;
        int a[2*s];
        for(int i = 0; i < 2*s; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < 2*s; i = i+2) {
            if(a[i] == x)
                x = a[i+1];
            else if(a[i+1] == x)
                x = a[i];
        }
        cout << x << endl;
    }
    return 0;
}