#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int ans = 0, cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == ':' && cnt >= 2) {
                ++ans;
                cnt = 1;
            } else if(s[i] == ':') cnt = 1;
            else if(s[i] == ')' && cnt >= 1) cnt += 1;
            else cnt = 0;
        }
        cout << ans << endl;
    }
    return 0;
}