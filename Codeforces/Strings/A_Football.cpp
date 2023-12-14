#include <iostream>
using namespace std;
bool check(string &s) {
    int cnt = 0, flag = s[0]-'0';
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '0' and flag == 0)
            cnt++;
        else if(s[i] == '1' and flag == 1)
            cnt++;
        else if(s[i] == '0' and flag == 1) {
            cnt = 1;
            flag = 0;
        }
        else if(s[i] == '1' and flag == 0) {
            cnt = 1;
            flag = 1;
        }
        if(cnt == 7)
            return false;
    }
    return true;
}
int main() {
    string s;
    cin >> s;
    if(check(s))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}