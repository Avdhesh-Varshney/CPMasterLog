#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        unordered_map<char, int> m;
        for(auto &ch : s) m[ch]++;
        int solved = 0;
        for(auto &i : m) if(i.second >= i.first - 'A' + 1) ++solved;
        cout << solved << endl;
    }
    return 0;
}