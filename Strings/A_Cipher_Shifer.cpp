#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        string ans = "";
        char temp = s[0];
        ans += temp;
        for(int i = 1; i < n-1; i++) {
            if(s[i] == temp) {
                temp = s[++i];
                ans += temp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}