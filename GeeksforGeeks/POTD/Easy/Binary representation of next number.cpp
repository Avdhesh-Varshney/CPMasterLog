// 04 June 2024

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool check(string& s) {
        for(auto &i : s) if(i != '1') return false;
        return true;
    }
    string binaryNextNumber(string s) {
        // code here.
        int n = s.length();
        if(check(s)) {
            string str = "1";
            for(auto &i : s) str.push_back('0');
            return str;
        }
        int last = n-1;
        while(last >= 0) {
            if(s[last] == '0') break;
            --last;
        }
        string str = "";
        bool flag = true;
        for(int i = 0; i < last; i++) {
            if(s[i] == '0') {
                if(!flag) str.push_back('0');
            } else if(s[i] == '1') {
                flag = false;
                str.push_back(s[i]);
            }
        }
        str.push_back('1');
        for(int i = last+1; i < n; i++) str.push_back('0');
        return str;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s) << endl;
    }
    return 0;
}