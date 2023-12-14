// Chef and Doof
// Problem Code - CLLCM

// https://www.codechef.com/problems/CLLCM

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, result = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if(temp%2 == 0)
                result = 1;
        }
        if(result == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}