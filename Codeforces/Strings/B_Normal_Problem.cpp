#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        reverse(s.begin(), s.end());
        for(auto &i : s) {
            if(i == 'q') i = 'p';
            else if(i == 'p') i = 'q';
        }
        cout << s << endl;
    }
    return 0;
}