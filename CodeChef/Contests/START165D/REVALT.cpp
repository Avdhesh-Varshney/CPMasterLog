#include <bits/stdc++.h>
using namespace std;

bool verify(int& n, string& s) {
    auto check = [&](char first) -> bool {
        string t(n, ' ');
        for(int i = 0; i < n; i++) t[i] = (i % 2 == 0) ? first : (first == '0' ? '1' : '0');
        vector<int> x;
        for(int i = 0; i < n; i++) if(s[i] != t[i]) x.emplace_back(i);
        if(x.empty()) return true;

        int left = x.front(), right = x.back();
        string reversed = s.substr(left, right - left + 1);
        reverse(reversed.begin(), reversed.end());
        string str = s.substr(0, left) + reversed + s.substr(right + 1);
        return str == t;
    };
    return check('0') || check('1');
}

int main() {
    // your code goes here
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        if(verify(n, s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}