// Lapindromes
// Problem Code - LAPIN

// https://www.codechef.com/problems/LAPIN

// Solution:
#include <bits/stdc++.h>
using namespace std;
void lapindrome() {
    string s;
    cin >> s;
    int n = s.length();
    int m = n/2;
    vector<char> v, x;
    for(int i = 0; i < m; i++) {
        char temp = s[i];
        v.push_back(temp);
    }
    for(int i = 0; i < m; i++) {
        char temp = s[n-i-1];
        x.push_back(temp);
    }
    sort(v.begin(), v.end());
    sort(x.begin(), x.end());
    int flag = 1;
    for(int i = 0; i < m; i++) {
        if(v[i] != x[i]) {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        lapindrome();
    }
    return 0;
}