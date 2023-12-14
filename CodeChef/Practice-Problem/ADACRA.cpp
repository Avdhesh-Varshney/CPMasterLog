// Ada and crayons
// Problem Code - ADACRA

// https://www.codechef.com/problems/ADACRA

// Solution:
#include <bits/stdc++.h>
using namespace std;
void crayons(string s) {
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != s[i+1])
            count++;
    }
    cout << count/2 << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s, r;
        cin >> s;
        crayons(s);
    }
    return 0;
}