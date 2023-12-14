// 07 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string stringMirror(string str){
        // Code here
        string nstr = "";
        nstr += str[0];
        if(str[0]==str[1]) return nstr+nstr;
        for(int i = 1; i < str.size(); i++) {
            if(str[i-1] >= str[i]) nstr = str.substr(0, i+1);
            else break;
        }
        string n2 = nstr;
        reverse(nstr.begin(), nstr.end());
        return n2+nstr;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        Solution ob;
        string res = ob.stringMirror(str);
        cout << res << endl;
    }
    return 0;
}