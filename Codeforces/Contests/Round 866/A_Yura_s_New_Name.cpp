#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int ans = s[0] == '_' ? 1 : 0;
        if(s.length() == 1) ans++;
        else {
            for(int i = 1; i < s.length(); i++)
                if(s[i] == '_' && s[i-1] == '_') ans++;
            if(s[s.length()-1] == '_') ans++;
        }
        cout << ans << endl;
    }
    return 0;
}