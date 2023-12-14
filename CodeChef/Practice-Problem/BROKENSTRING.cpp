// Mario and the Broken String
// Problem Code - BROKENSTRING

// https://www.codechef.com/problems/BROKENSTRING

// Solution:
#include <iostream>
using namespace std;
bool check(int m, string s) {
    for(int i = 0; i < m; i++)
        if(s[i] != s[m+i])
            return false;
    return true;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        if(check(n/2, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
