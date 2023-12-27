#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        int time = 0, last = s[0] - '0';
        if(s[0] == '0') {
            time += 10;
            last = 10;
        } else time += s[0] - '0';
        for(int i = 1; i < 4; i++) {
            if(s[i] == '0') {
                time += abs(10 - last) + 1;
                last = 10;
            } else {
                time += abs(s[i] - '0' - last) + 1;
                last = s[i] - '0';
            }
        }
        cout << time << endl;
    }
    return 0;
}