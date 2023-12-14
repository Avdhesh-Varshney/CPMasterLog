#include <iostream>
using namespace std;

int main() {
    string s, ans;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
            continue;
        else {
            ans += '.';
            ans += ch;
        }
    }
    cout << ans << endl;
    return 0;
}