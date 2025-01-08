#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
    string s;
    cin >> t;
	while(t--){
        cin >> s;
        bool found = false;
        for(int i = 1; i < s.length(); i++) {
            if(s[i] == s[i-1]){
                cout << s[i-1] << s[i] << endl;
                found = true;
                break;
            }
        }
        if(found) continue;
        for(int i = 2; i < s.length(); i++) {
            if(s[i] != s[i-2]) {
                cout << s[i-2] << s[i-1] << s[i] << endl;
                found = true;
                break;
            }
        }
        if(!found) cout << "-1" << endl;
    }
	return 0;
}