#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, str = "codeforces";
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < 10; i++)
            if(s[i] != str[i]) cnt++;
        cout << cnt << endl;
    }
    return 0;
}