#include <iostream>
#include <unordered_map>
using namespace std;
bool check(const string& s) {
    unordered_map<char, int> m;
    for(auto &ch : s) m[ch]++;
    int odd = 0;
    for(const auto& pair : m) {
        if(pair.second%2 == 1) ++odd;
    }
    return odd <= 1;
}
int main() {
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        bool flag = 1;
        for(long long i = 0; i < s.size() - 1; i++) {
            if(s[i] != s[i+1]) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            cout << "NO" << endl;
            continue;
        }
        long long say = 0;
        for(long long i = 0; i < s.size()-1; i++) {
            if(s[i] != s[i+1]) {
                say++;
                i++;
            }
        }
        if(say == 1) {
            cout << "NO" << endl;
            continue;
        }
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}