// Chef and String
// Problem Code - RECNDSTR

// https://www.codechef.com/problems/RECNDSTR

// Solution:
#include <iostream>
using namespace std;
string left(string s) {
    string str;
    for(int i = 1; i < s.length(); i++)
        str.push_back(s[i]);
    str.push_back(s[0]);
    return str;
}
string right(string s) {
    string str;
    str.push_back(s[s.length() - 1]);
    for(int i = 0; i < s.length() - 1; i++)
        str.push_back(s[i]);
    return str;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(left(s) == right(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}