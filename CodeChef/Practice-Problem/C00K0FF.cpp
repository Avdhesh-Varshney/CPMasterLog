// Choosing Cook Off Problems
// Problem Code - COOKOFF

// https://www.codechef.com/problems/COOKOFF

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, a = 0, b = 0, c = 0, d = 0, e = 0;
        cin >> n;
        string s[n];
        for(int i = 0; i < n; i++)
            cin >> s[i];
        for(int i = 0; i < n; i++) {
            if(s[i] == "cakewalk")
                a = 1;
            else if(s[i] == "simple")
                b = 1;
            else if(s[i] == "easy")
                c = 1;
            else if(s[i] == "easy-medium" or s[i] == "medium")
                d = 1;
            else if(s[i] == "medium-hard" or s[i] == "hard")
                e = 1;
        }
        if(a+b+c+d+e == 5)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}