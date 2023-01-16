// Palindromic substrings
// Problem Code - STRPALIN

// https://www.codechef.com/problems/STRPALIN

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        int flag = 0;
        cin >> a >> b;
        for(int i = 0; i < a.length(); i++) {
            for(int j = 0; j < b.length(); j++) {
                if(a[i] == b[j]) {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}