// Medel
// Problem Code - MDL

// https://www.codechef.com/problems/MDL

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], large = 0, small = 110;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(large < a[i])
                large = a[i];
            if(small > a[i])
                small = a[i];
        }
        for(int i = 0; i < n; i++) {
            if(large == a[i])
                cout << large << " ";
            if(small == a[i])
                cout << small << " ";
        }
        cout << endl;
    }
    return 0;
}