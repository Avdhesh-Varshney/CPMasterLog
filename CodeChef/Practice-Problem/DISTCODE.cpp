// Distinct Codes
// Problem Code - DISTCODE

// https://www.codechef.com/problems/DISTCODE

// Solution:
#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        set<string> s;
        string str;
        cin >> str;
        for(int i = 0; i < str.length()-1; i++) {
            string temp;
            if(isupper(str[i]) and isupper(str[i+1])) {
                temp.push_back(str[i]);
                temp.push_back(str[i+1]);
                s.insert(temp);
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}