// Split the Str Ing
// Problem Code - SPLITIT

// https://www.codechef.com/problems/SPLITIT

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, flag = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n-1; i++) {
            if(s[n-1] == s[i]) {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}