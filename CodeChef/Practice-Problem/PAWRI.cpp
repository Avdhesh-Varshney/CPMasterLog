// Pawri Meme
// Problem Code - PAWRI

// https://www.codechef.com/problems/PAWRI

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length() - 4;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'p' and s[i+1] == 'a' and s[i+2] == 'r' and s[i+3] == 't' and s[i+4] == 'y') {
                s[i+2] = 'w';
                s[i+3] = 'r';
                s[i+4] = 'i';
            }
        }
        cout << s << endl;
    }
    return 0;
}