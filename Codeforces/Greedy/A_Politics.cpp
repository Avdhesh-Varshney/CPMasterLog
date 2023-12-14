#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    string s[a];
    for(int i = 0; i < a; i++)
        cin >> s[i];
    int c = 1;
    for(int i = 1; i < a; i++)
        if(s[i] == s[0]) c++;
    cout << c << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}