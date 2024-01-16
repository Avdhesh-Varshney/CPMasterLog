#include <bits/stdc++.h>
using namespace std;
bool check(vector<char>& ch, int x) {
    return (ch[x] == 'W' && ch[x+1] == 'W' && ch[x+2] == 'W');
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        vector<char> ch(6);
        for(int i = 0; i < 6; i++) {
            cin >> ch[i];
        }
        if(check(ch, 0) || check(ch, 1) || check(ch, 2) || check(ch, 3)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}