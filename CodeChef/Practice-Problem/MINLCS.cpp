// Minimise LCS
// Problem Code - MINLCS

// https://www.codechef.com/problems/MINLCS

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int p, count = 0;
        cin >> p;
        string a, b;
        cin >> a >> b;
        unordered_map<char, int> m, n;
        for(char i : a)
            m[i]++;
        for(char i : b)
            n[i]++;
        for(char i = 'a'; i <= 'z'; ++i)
            count = max(count, min(m[i], n[i]));
        cout << count << endl;
    }
    return 0;
}