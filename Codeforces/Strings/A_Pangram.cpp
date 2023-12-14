#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for(int i = 0; i < n; i++) {
        if(isupper(s[i]))
            m[tolower(s[i])]++;
        else
            m[s[i]]++;
    }
    if(m.size() >= 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}