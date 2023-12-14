// Lapindromes
// Problem Code - LAPIN

// https://www.codechef.com/problems/LAPIN

// Solution:
#include <bits/stdc++.h>
using namespace std;
bool check(unordered_map<char, int>& m, unordered_map<char, int>& n, string s) {
    for(int i = 0; i < s.length()/2; i++)
        if(m[s[i]] != n[s[i]])
            return false;
    return true;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        unordered_map<char, int> m, n;
        if(s.length()%2 == 0) {
            for(int i = 0; i < s.length(); i++) {
                if(i < s.length()/2)
                    m[s[i]]++;
                else
                    n[s[i]]++;
            }
            if(m.size() == n.size()) {
                if(check(m, n, s))
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else {
            for(int i = 0; i < s.length(); i++) {
                if(i == s.length()/2)
                    continue;
                else if(i < s.length()/2)
                    m[s[i]]++;
                else
                    n[s[i]]++;
            }
            if(m.size() == n.size()) {
                if(check(m, n, s))
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}