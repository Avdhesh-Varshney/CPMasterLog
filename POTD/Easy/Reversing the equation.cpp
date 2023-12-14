// 04 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseEqn (string s)
    {
        //code here.
        string ans = "", temp = "";
        for(int i = s.length()-1; i >= 0; i--) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                reverse(temp.begin(), temp.end());
                ans += temp;
                ans += s[i];
                temp = "";
            } else temp += s[i];
        }
        reverse(temp.begin(), temp.end());
        return ans + temp;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseEqn(s) << endl;
    }
    return 0;
}