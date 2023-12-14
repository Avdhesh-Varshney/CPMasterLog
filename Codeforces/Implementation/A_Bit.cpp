#include <iostream>
using namespace std;
int main() {
    int n, ans = 0;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(s[0] == '+' || s[2] == '+')
            ans++;
        else if(s[0] == '-' || s[2] == '-')
            ans--;
    }
    cout << ans << endl;
    return 0;
}