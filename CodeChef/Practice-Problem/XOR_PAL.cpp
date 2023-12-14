// Xor Palindrome
// Problem Code - XOR_PAL

// https://www.codechef.com/problems/XOR_PAL

// Solution:
#include <iostream>
using namespace std;
int ispalindrome(int n, string s) {
    if(n == 1)
        return 0;
    int count = 0;
    for(int i = 0; i < n/2; i++) {
        if(s[i] != s[n-i-1])
            count++;
    }
    return (count + 1)/2;
}
int main() {
    // your code goes here
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        cout << ispalindrome(n, s) << endl;
    }
    return 0;
}