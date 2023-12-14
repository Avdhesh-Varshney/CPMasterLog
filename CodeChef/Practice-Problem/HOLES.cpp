// Holes in the Text
// Problem Code - HOLES

// https://www.codechef.com/problems/HOLES

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int count = 0;
        string s;
        cin >> s;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == 'A' or s[i] == 'D' or s[i] == 'O' or s[i] == 'P' or s[i] == 'Q' or s[i] == 'R')
                count++;
            else if(s[i] == 'B')
                count = count + 2;
        }
        cout << count << endl;
    }
    return 0;
}