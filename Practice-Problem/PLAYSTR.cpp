// Playing with Strings
// Problem Code - PLAYSTR

// https://www.codechef.com/problems/PLAYSTR

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, a = 0, b = 0, c = 0, d = 0;
        string s, r;
        cin >> n >> s >> r;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '1')
                a++;
            else
                b++;
        }
        for(int i = 0; r[i] != '\0'; i++) {
            if(r[i] == '1')
                c++;
            else
                d++;
        }
        if(a == c and b == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}