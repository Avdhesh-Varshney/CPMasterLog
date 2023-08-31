// Way - 1

#include <bits/stdc++.h>
using namespace std;
bool check(string &s, int n) {
    if(tolower(s[0]) != 'm')
        return false;
    int flag = 1;
    for(int i = 1; i < n; i++) {
        char ch = tolower(s[i]);
        char ch1 = tolower(s[i-1]);
        if(ch != 'm' and ch != 'e' and ch != 'o' and ch != 'w')
            return false;
        else if(ch1 != 'm' and ch1 != 'e' and ch1 != 'o' and ch1 != 'w')
            return false;
        if(ch != ch1) {
            if(ch == 'e' and ch1 =='m')
                continue;
            else if(ch == 'o' and ch1 == 'e')
                continue;
            else if(ch == 'w' and ch1 == 'o')
                continue;
            else
                return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        if(n < 4)
            cout << "NO" << endl;
        else if(check(s, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// Way - 2
#include <bits/stdc++.h>
using namespace std;
bool verify(int &n, string &s) {
    long long i = 0, flag = 0;
    while(i < n && s[i] == 'm') {
        flag = 1;
        i++;
    }
    if(flag != 1) return false;
    while(i < n && s[i] == 'e') {
        flag = 2;
        i++;
    }
    if(flag != 2) return false;
    while(i < n && s[i] == 'o') {
        flag = 3;
        i++;
    }
    if(flag != 3) return false;
    while(i < n && s[i] == 'w') {
        flag = 4;
        i++;
    }
    if(flag != 4 || i < n) return false;
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(verify(n, s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}