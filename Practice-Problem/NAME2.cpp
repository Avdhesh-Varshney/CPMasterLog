// Your Name is Mine
// Problem Code : NAME2

// https://www.codechef.com/problems/NAME2

// Solution:
#include <iostream>
using namespace std;
bool check(string &m, string &n) {
    if(m.length() > n.length())
        check(n, m);
    int i = 0, j = 0;
    while(i < m.length() and j < n.length()) {
        if(m[i] == n[j])
            i++;
        j++;
    }
    if(i == m.length())
        return true;
    return false;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string m, n;
        cin >> m >> n;
        if(check(m, n) || check(n, m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}