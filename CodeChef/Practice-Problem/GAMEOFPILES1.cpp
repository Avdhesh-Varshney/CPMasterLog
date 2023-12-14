// Game of Piles Version 1
// Problem Code - GAMEOFPILES1

// https://www.codechef.com/problems/GAMEOFPILES1

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], count = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i < n; i++) {
            if(a[i]%2 == 1)
                count++;
        }
        if(a[0] == 1 or count%2 == 1)
            cout << "CHEF" << endl;
        else
            cout << "CHEFINA" << endl;
    }
    return 0;
}