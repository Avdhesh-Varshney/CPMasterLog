// Brackets
// Problem Code - BRACKETS

// https://www.codechef.com/problems/BRACKETS

// Solution:
#include <iostream>
using namespace std;
int func(string s) {
    int balance = 0, max_b = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(')
            balance++;
        if(s[i] == ')')
            balance--;
        max_b = max(max_b, balance);
    }
    return max_b;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a;
        int n = func(a);
        for(int i = 0; i < 2*n; i++) {
            if(i < n)
                b.push_back('(');
            else
                b.push_back(')');
        }
        cout << b << endl;
    }
    return 0;
}