#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++) mp[s[i]]++;
        int large = 0, small = INT_MAX;
        char chL, chS;
        for(auto &i : mp) {
            if(i.second > large) {
                large = i.second;
                chL = i.first;
            }
            if(i.second < small) {
                small = i.second;
                chS = i.first;
            }
        }
        for(auto &i : s) {
            if(chS != chL && i == chS) {
                i = chL;
                break;
            } else if(chS == chL && i != chS) {
                i = chL;
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}