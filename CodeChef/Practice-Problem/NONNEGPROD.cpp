// Non-Negative Product
// Problem Code - NONNEGPROD

// https://www.codechef.com/problems/NONNEGPROD

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, count = 0, flag = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] < 0)
                count++;
            if(a[i] == 0)
                flag = 1;
        }
        if(count%2 == 0 or flag == 1)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}