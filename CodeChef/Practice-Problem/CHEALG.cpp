// Check Algorithm
// Problem Code : CHEALG

// https://www.codechef.com/problems/CHEALG

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s, str, temp;
        cin >> s;
        char ch = s[0];
        str.push_back(ch);
        int count = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ch) {
                temp = to_string(count);
                str += temp;
                ch = s[i];
                str.push_back(ch);
                count = 0;
            }
            count++;
        }
        temp = to_string(count);
        str += temp;
        if(s.length() > str.length())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}