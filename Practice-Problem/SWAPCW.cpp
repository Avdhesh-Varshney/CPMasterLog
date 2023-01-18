// Swapping Chefs Way
// Problem Code - SWAPCW

// https://www.codechef.com/problems/SWAPCW

// Solution:
#include <iostream>
using namespace std;
bool check(int n, string s) {
    for(int i = 0; i < n-1; i++)
        if(s[i] > s[i+1])
            return false;
    return true;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n/2; i++)
            if(s[i] > s[n-i-1])
                swap(s[i], s[n-i-1]);
        if(check(n, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}